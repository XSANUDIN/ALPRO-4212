#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int tambah(int a, int b);
int kurang(int a, int b);
int jumlahArray(int arr[], int n);
double hitungRata(int arr[], int n);


int main(){
    int n,arr[n],pilih,x,y;
    char ulang;
    int JumA;
    double rata;

        do{
            cout<<"---------------------------------------------"<<endl;
            cout<<"|                Pilih Menu                 |"<<endl;
            cout<<"---------------------------------------------"<<endl;
            cout<<"| 1. Tambah                                 |"<<endl;
            cout<<"| 2. Kurang                                 |"<<endl;
            cout<<"| 3. Menambahkan Nilai Dalam Array          |"<<endl;
            cout<<"| 4. Menghitung Rata-Rata Nilai Dalam Array |"<<endl;
            cout<<"---------------------------------------------"<<endl;
            cout<<"\n";

            cout<<"Pilih : ";
                cin >> pilih;

            switch (pilih){
                case 1:
                    cout<<"\nTambah\n"<<endl;
                    cout<<"Masukkan angka pertama : "<<endl; cin>>x;
                    cout<<"Masukkan angka kedua : "<<endl; cin>>y;
                    cout<<"hasilnya adalah = "<< tambah(x,y)<<endl;
                break;
                case 2:
                    cout<<"Kurang"<<endl;
                    cout<<"Masukkan angka pertama : "<<endl; cin>>x;
                    cout<<"Masukkan angka kedua : "<<endl; cin>>y;
                    cout<<"hasilnya adalah = "<<kurang(x,y)<<endl;
                break;
                case 3:
                    cout << "\nFungsi untuk menghitung Hasil Penjumlahan dari sebuah array" <<endl;

                    cout << "\nMasukkan jumlah elemen pada array: ";cin >> n;

                    for (int i = 0; i < n; i++) {
                        cout << "Masukkan elemen ke-" << i + 1 << ": ";
                        cin >> arr[i];
                    }

                    JumA = jumlahArray(arr, n);
                    cout << "Hasil penjumlahan array adalah: " << JumA << endl;
                break;
                case 4:
                    cout << "\nFungsi untuk menghitung rata-rata dari sebuah array" <<endl;

                    cout << "\nMasukkan jumlah elemen array: ";
                    cin >> n;

                        for (int i = 0; i < n; i++) {
                            cout << "Masukkan elemen ke-" << i+1 << ": ";
                            cin >> arr[i];
                        }

                    rata = hitungRata(arr, n);
                    cout << "Rata-rata dari array adalah: " << rata << endl;
                break;

            }
            cout<<endl;

            cout<<"Pilih lagi y/t?";
                cin>>ulang;
            cout<<endl;
        }
        while (ulang=='y');
        cout<<"Program Selesai :U" << endl;
        return 0;
}

//-------------------------Fungsi Tambah-------------------------------------//
int tambah(int a, int b){
    int hasil;
    hasil=a+b;

    return hasil;
}

//-------------------------Fungsi Kurang-------------------------------------//
int kurang(int a, int b){
    int hasil;
    hasil=a-b;

    return hasil;
}

//-------------------------Fungsi Tambah Array-------------------------------------//
int jumlahArray(int arr[], int n) {
    int jum = 0;
        for (int i = 0; i < n; i++) {
            jum += arr[i];
        }
    return jum;
}

//-------------------------Fungsi Rata-Rata Array-------------------------------------//
double hitungRata(int arr[], int n) {
    double total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }
    double rata = total / n;
    return rata;
}




