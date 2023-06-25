#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nim, nama, jurusan;
    int tahun;


    void print() {
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Tahun: " << tahun << endl;
    }

};

int main(){
    int n=4;

    mahasiswa mahasiswaw[n];

    mahasiswaw[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    mahasiswaw[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswaw[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswaw[3] = {"A11.2000.01234", "Siti", "Kesehatan", 1993};

    for(int i=0;i<n;i++){
        mahasiswaw[i].print();
        cout<<endl;
    }

    cout<<"Jumlah data yang akan di input : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Nim : ";
        cin>>mahasiswaw[i].nim;
        cout<<"Nama : ";
        cin>>mahasiswaw[i].nama;
        cout<<"Jurusan : ";
        cin>>mahasiswaw[i].jurusan;
        cout<<"Tahun : ";
        cin>>mahasiswaw[i].tahun;

    }


    cout<<endl;

    for(int i=0;i<n;i++){
        mahasiswaw[i].print();
        cout<<endl;
    }

return 0;
}
