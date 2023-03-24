#include <iostream>
#include "fungsi.h"
using namespace std;

int main(){
int x,y;
char ulang;
int pilih=0;

        do{
            cout<<"------------------------------------------------"<<endl;
            cout<<"|                Pilih Menu                    |"<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"| 1. Nilai Max                                 |"<<endl;
            cout<<"| 2. Nilai Min                                 |"<<endl;
            cout<<"| 3. Nilai Max dalam Array                     |"<<endl;
            cout<<"| 4. Nilai Min dalam Array                     |"<<endl;
            cout<<"| 5. Apakah bernilai genap                     |"<<endl;
            cout<<"| 6. Apakah bernilai ganjil                    |"<<endl;
            cout<<"| 7. Apakah Faktor dari Nilai                  |"<<endl;
            cout<<"| 8. Mencari nilai                             |"<<endl;
            cout<<"| 9. Mencari letak array                       |"<<endl;
            cout<<"| 10. Menjumlahkan Bilangan Genap dalam Array  |"<<endl;
            cout<<"| 11. Menjumlahkan Bilangan Ganjil dalam Array |"<<endl;
            cout<<"|----------------------------------------------|"<<endl;
            cout<<endl;

            cout<<"Pilih Menu : ";cin>>pilih;

                if(pilih==1){
                    cout<<"Masukkan Nilai Pertama : ";cin>>x;
                    cout<<"Masukkan Nilai Kedua : ";cin>>y;\
                    cout<<"Nilai Terbesar Adalah : "<<Max(x,y);
                }

                else if(pilih==2){
                    cout<<"Masukkan Nilai Pertama : ";cin>>x;
                    cout<<"Masukkan Nilai Kedua : ";cin>>y;\
                    cout<<"Nilai Terkecil Adalah : "<<Min(x,y);
                }

                else if(pilih==3){
                    int n;
                    cout<<"Menampilkan Nilai Terbesar dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    int arr[n];
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    cout<<"Nilai Terbesar Adalah : "<<MaxArray(arr,n);

                }

                else if(pilih==4){
                    int n;
                    cout<<"Menampilkan Nilai Terkecil dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    int arr[n];
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    cout<<"Nilai Terkecil Adalah : "<<MinArray(arr,n);
                }

                else if(pilih==5){
                    cout<<"x apakah bilangan genap"<<endl;
                    cout<<"Masukkan Nilai : ";cin>>x;
                    if(isEven(x)){
                        cout<<"Adalah bilangan genap"<<endl;
                    }
                    else{
                        cout<<"Bukan bilangan genap"<<endl;
                    }
                }

                else if(pilih==6){
                    cout<<"x apakah bilangan ganjil"<<endl;
                    cout<<"Masukkan Nilai : ";cin>>x;
                    if(isOdd(x)){
                        cout<<"Adalah bilangan ganjil"<<endl;
                    }
                    else{
                        cout<<"Bukan bilangan ganjil"<<endl;
                    }
                }

                else if(pilih==7){
                    cout<<"x apakah bilangan ganjil"<<endl;
                    cout<<"Masukkan Nilai : ";cin>>x;
                    cout<<"Masukkan Faktor : ";cin>>y;
                    if(isFactor(x,y)){
                        cout<<y<<" "<< "Adalah Faktor dari bilangan"<<" "<<x<<endl;
                    }
                    else{
                        cout<<y<<" "<<"Bukan Faktor dari bilangan"<<" "<<x<<endl;
                    }
                }

                else if(pilih==8){
                    int n;
                    cout<<"Mencari Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    int arr[n];
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }
                    cout<<"Nilai Yang Dicari : ";cin>>x;
                    int cari = searchArray(arr, n, x);
                    if (cari != -1) {
                        cout << "Elemen ditemukan di index " << cari << endl;
                    } else {
                        cout << "Tidak ditemukan" << endl;
                    }
                }

                else if(pilih==9){
                    int n;
                    cout<<"Apakah data Ditemukan"<<endl;
                    cout <<"Masukkan Jumlah Array : ";
                    cin>>n;
                    int arr[n];
                    for (int i = 0; i < n; i++) {
                        cout<<"Masukkan elemen array ke-"<<i<<" : ";cin >> arr[i];
                      }
                    int x;
                    cout << "Masukkan Elemen array yang dicari : ";
                    cin >> x;
                    bool found = foundArray(arr, n, x);
                        if (found) {
                        cout << "Elemen ditemukan di array" << endl;
                      } else {
                        cout << "Tidak ditemukan" << endl;
                      }

                }

                else if(pilih==10){
                    int n;
                    cout<<"Menghitung Bilangan Genap Dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    int arr[n];
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    int sum=SumEven(arr,n);
                    cout<<"Jumlah Bilangan Genap Dalam Array Adalah : "<<sum;
                }

                else if(pilih==11){
                    int n;
                    cout<<"Menghitung Bilangan Ganjil Dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    int arr[n];
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    int sum=SumOdd(arr,n);
                    cout<<"Jumlah Bilangan Ganjil Dalam Array Adalah : "<<sum;
                }

                else{
                    cout<<"Sumdah Semlesai Euy"<<endl;
                }

            cout<<"\n\nPilih lagi? y/t"<<endl;
            cin>>ulang;

        }
            while (ulang=='y');
            cout<<"Program Wes Rampung"<<endl;


    return 0;
}
