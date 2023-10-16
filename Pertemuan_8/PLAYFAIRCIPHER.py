# PLAYFAIR CIPHER
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
#                           FUNGSI                                    #
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
def letteronly(text):
    """
    Ganti J dengan I dan menghapus selain huruf
    """
    output=''
    for char in text:
        if 64 < ord(char) < 91:
            if char=='J':
                char='I'
            output+=char
    return(output)


def massageKey(txt):
    """ 
    MEMBUAT KOLOM KEY
    """
    userkey=letteronly(txt)
    key=''
    for char in userkey:
        if char not in key:
            key+=char
    return(key)

def massageMessage(txt):
    """
    MEMBUAT PASANGAN DAN MENAMBAHKAN Z
    """
    usrmsg=letteronly(txt)
    msg=''
    # dimana pasangan
    First=True
    for i in range(len(usrmsg)):

        # di pasangan 1
        if First:
            msg+=usrmsg[i]

            # jka huruf terakhir -1 + Z
            if i + 1 == len(usrmsg):
                msg+='Z'
            
            # jika sama tambah z maju 1
            else:
                if usrmsg[i] == usrmsg[i+1]:
                    msg+='Z'
                else:
                    First=False
        else:
            # just append second letter
            msg+=usrmsg[i]
            First=True

    return(msg)

def showgrid(key):
    """
    Menampilkan kolom
    """
    print('\nPlayfair Grid:')
    for j in range(5):
        for i in range(5):
            print(key[i+j*5],'',end='')
        print()
    print()
    return

def showmsg(msg):
    """
    Membuat pasangan
    """
    space=True
    for char in msg:
        print(char,end='')
        space = not space
        if space:
            print(' ',end='')
    print()
    return

def playfair(enc,msg,key):
    """
    Encrypt with playfair
    """
    # membalik operasi
    offset=-1
    if enc:
        offset=+1
    output=''
    for i in range(0,len(msg),2):
        # membuat pasangan
        lett1=msg[i]
        lett2=msg[i+1]
        # mencari posisi key
        pos1=key.find(lett1)
        pos2=key.find(lett2)
        # merubah koordinat
        coord1=[pos1%5,pos1//5]
        coord2=[pos2%5,pos2//5]
        # jika di baris sama, geser kanan
        if coord1[0]==coord2[0]:
            coord1[1]=(coord1[1]+offset)%5
            coord2[1]=(coord2[1]+offset)%5
        # jika di kolom sama, geser bawah
        elif coord1[1]==coord2[1]:
            coord1[0]=(coord1[0]+offset)%5
            coord2[0]=(coord2[0]+offset)%5
        # jika membentuk persegi, tukar dengan titik temu
        else:
            tmp=coord2[0]
            coord2[0]=coord1[0]
            coord1[0]=tmp
        # mengembalikan ke key dari koordinat
        pos1=coord1[0]+5*coord1[1]
        pos2=coord2[0]+5*coord2[1]
        # ambil kalimat baru
        lett1=key[pos1]
        lett2=key[pos2]
        # membuat output
        output+=lett1
        output+=lett2
    return output

def showres(msg1,msg2):
    linesize=50
    for i in range(0,len(msg1),linesize):
        showmsg(msg1[i:i+min(linesize,len(msg1)-i)])
        showmsg(msg2[i:i+min(linesize,len(msg2)-i)])
        print()
    return



""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
#                               GUI                                    #
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
# MENU SETUP
def encrypt_or_decrypt():
    userkey = key_entry.get().upper()
    # memastikan panjang karakter
    userkey = userkey + 'abcdefghijklmnopqrstuvwxyz'.upper()
    key = massageKey(userkey)
    usermsg = message_entry.get().upper()
    msg = massageMessage(usermsg)
    enc = encryption_var.get()

    newmsg = playfair(enc, msg, key)

    result_text.config(state=tk.NORMAL)
    result_text.delete(1.0, tk.END)
    result_text.insert(tk.END, 'KOLOM PLAYFAIR :\n\n')
    for j in range(5):
        for i in range(5):
            result_text.insert(tk.END, key[i + j * 5] + ' ')
        result_text.insert(tk.END, '\n')
    
    result_text.insert(tk.END, '\nPASANGAN :\n')
    space = True
    for char in msg:
        result_text.insert(tk.END, char)
        space = not space
        if space:
            result_text.insert(tk.END, ' ',)

    result_text.insert(tk.END,'\n\nCIPHER : ')       
    result_text.insert(tk.END, newmsg)

   
    result_text.config(state=tk.DISABLED)

#   TERMINAL SHOW
    showgrid(key)  
    print('diag')  
    showres(msg, newmsg)  
    print('satu kalimat:')  
    print(newmsg)  


def clear_input():
    key_entry.delete(0, tk.END)  # Clear key entry field
    message_entry.delete(0, tk.END)  # Clear message entry field
    result_text.config(state=tk.NORMAL)  # Enable result text widget
    result_text.delete(1.0, tk.END)  # Clear result text widget
    result_text.config(state=tk.DISABLED)  # Disable result text widget

#   TAMPILAN
import tkinter as tk

#   Main
window = tk.Tk()
window.title("Playfair Enkripsi / Dekripsi Tools")
window.geometry("862x519")
window.configure(bg="#3A7FF6")

canvas = tk.Canvas(window, bg="lightblue", height=519, width=862,
    bd=0, highlightthickness=0, relief="ridge")
canvas.place(x=0, y=0)
canvas.create_rectangle(431, 0, 431 + 431, 0 + 519, fill="#d6d7dc", outline="")

#   RESULT MENU
canvas.create_text(505.5, 58.0, text="RESULT",
    fill="#515486", font=("Arial-BoldMT", int(22.0)))

result_text = tk.Text(window, bg="black",fg="yellow", font=( int(12.0)))
result_text.place(height=410, width=406)
result_text.config(state=tk.DISABLED)
result_text.place(x=445.0, y=100)
result_text_button = tk.Button(window, text="CLEAR",bg="yellow", fg="black", command=clear_input)
result_text_button.place(x=140, y=435, width=140, height=50)

#   INPUT
canvas.create_text(183.5, 58.0, text="PLAYFAIR CIPHER",
    fill="#515486", font=("Arial-BoldMT", int(22.0)))
canvas.create_text(50.0, 120.0, text="KEY ", fill="#292421",
    font=("Arial-BoldMT", int(11.0)), anchor="w")
key_entry = tk.Entry(window, bd=0, bg="#F6F7F9",fg="#000716",  highlightthickness=0)    #KEY 

key_entry.place(x=50.0, y=130, width=321.0, height=35)
canvas.create_text(50.0, 191.0, text="TEXT ", fill="#292421",
    font=("Arial-BoldMT", int(11.0)), anchor="w")
message_entry = tk.Entry(window, bd=0, bg="#F6F7F9",fg="#000716",  highlightthickness=0)    #TEXT
message_entry.place(x=50.0, y=200, width=321.0, height=35)

#   SELECTION
encryption_var = tk.BooleanVar()
encryption_var.set(True)  # True : ENCRYPT, False : DECRYPT
encryption_radio = tk.Radiobutton(window,bd=0, activebackground="lightblue", bg="lightblue", highlightthickness=0, font=("Arial-BoldMT", int(10.0)),
                                  text="ENCRYPT", variable=encryption_var, value=True)
decryption_radio = tk.Radiobutton(window,bd=0, activebackground="lightblue", bg="lightblue", highlightthickness=0, font=("Arial-BoldMT", int(10.0)),
                                  text="DECRYPT", variable=encryption_var, value=False)
encryption_radio.place(x=50.0, y=273, height=40)
decryption_radio.place(x=50.0, y=303, height=40)


encrypt_button = tk.Button(window, text="GENERATE",bg="white", fg="blue", command=encrypt_or_decrypt)   #Function Button
encrypt_button.place(x=140, y=380, width=140, height=50)


window.resizable(0,0)
window.mainloop()



