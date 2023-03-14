#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float tambah(float,float);

int main(){
    int pilih;
    char ulang;
    float x,y;
        do{
            cout<<"Pilih menu"<<endl;
            cout<<"1. Tambah"<<endl;
            cout<<"2. Kurang"<<endl;
            cout<<"3. Menambahkan Nilai Dalam Array"<<endl;
            cout<<"4. Menghitung Rata-Rata Nilai Dalam Array"<<endl;
            cout<<"\n";

            cout<<"Pilih : ";
                cin >> pilih;

            switch (pilih){
                case 1:
                    cout<<"tambah"<<endl;
                    cout<<"Masukkan nilai pertama : "<<endl;
                    cin>>x;
                    cout<<"Masukkan nilai pertama : "<<endl;
                    cin>>y;
                    cout<<"hasilnya adalah = "<<tambah(x,y)<<endl;

                    break;
                case 2:
                    cout<<""<<endl;
                    break;
                case 3:
                    cout<<""<<endl;
                    break;
                case 4:
                    cout<<""<<endl;
                    break;
            }
            cout<<endl;

            cout<<"Pilih lagi y/t?";
            cin>>ulang;
            cout<<endl;
        }
        while (ulang!='t');
        cout << endl;
        return 0;
}




float tambah(float a, float b){

    return a+b;
}

float kurang(float a, float b){
    float hasil;

    hasil=a-b;

    return hasil;
}
