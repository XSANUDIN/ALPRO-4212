#include <iostream>
#include "fungsi.h"
using namespace std;

int main(){
int x,y,hasil;
int n;
int arr[n];
char ulang;
int pilih=0;

        do{
            cout<<"------------------------------------------------"<<endl;
            cout<<"|                Pilih Menu                    |"<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"| 1. Nilai Max                                 |"<<endl;
            cout<<"| 2. Nilai Min                                 |"<<endl;
            cout<<"| 3. Nilai Max dalam Arry                      |"<<endl;
            cout<<"| 4. Nilai Min dalam Arry                      |"<<endl;
            cout<<"| 5. Apakah bernilai genap                     |"<<endl;
            cout<<"| 6. Apakah bernilai ganjil                    |"<<endl;
            cout<<"| 7. Apakah Faktor dari Nilai                  |"<<endl;
            cout<<"| 8. Mencari nilai                             |"<<endl;
            cout<<"| 9. Mencari letak array                       |"<<endl;
            cout<<"| 10. Menjumlahkan Bilangan Genap dalam Array  |"<<endl;
            cout<<"| 11. Menjumlahkan Bilangan Ganjil dalam Array |"<<endl;
            cout<<"| 12. Menghitung Rata-Rata Nilai Dalam Array   |"<<endl;
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
                    cout<<"Menampilkan Nilai Terbesar dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    cout<<"Nilai Terbesar Adalah : "<<MaxArray(arr,n);

                }

                else if(pilih==4){
                    cout<<"Menampilkan Nilai Terkecil dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
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
                    cout<<"Mencari Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }
                    cout<<"Nilai yang dicari ";cin>>x;
                    if(Search(x,arr) != -1){
                    cout<<"Ditemukan"<<Search(x,arr);
                    }
                    else {
                        cout<<"tidak ditemukan";
                    }

                }

                else if(pilih==9){
                    cout<<"Mencari Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }
                    cout<<"Nilai yang dicari ";cin>>x;
                    if (Found(arr,x)){
                        cout<<x<< " Ditemukan";
                    }
                    else{
                        cout<<x<< " Tidak ditemukan";
                    }
                }

                else if(pilih==10){
                    cout<<"Menghitung Bilangan Genap Dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    int sum=SumEven(arr,n);
                    cout<<"Jumlah Bilangan Genap Dalam Array Adalah : "<<sum;
                }

                else if(pilih==11){
                    cout<<"Menghitung Bilangan Ganjil Dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    int sum=SumOdd(arr,n);
                    cout<<"Jumlah Bilangan Ganjil Dalam Array Adalah : "<<sum;
                }

                else if(pilih==12){
                    cout<<"kumaha a"<<endl;
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
