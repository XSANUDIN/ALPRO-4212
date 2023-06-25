#include <iostream>

using namespace std;

typedef struct hitung{
    int p,l,r,t;
    const float phi = 3.14;

    int hitungPP(){
        return p*l;
    }

    float Luli(){
        return phi * r * r;
    }

    float VoCu(){
        return 1.0/3.0*phi*r*r*t;
    }

    float VoBo(){
        return 4.0/3.0*phi*r*r;
    }
}bidang;

int main(){
    hitung hitung;

    hitung.p = 10;
    hitung.l = 20;
    hitung.r = 8;
    hitung.t = 5;

    cout<<"Diketahui : "<<endl;
    cout<<"Panjang = "<<hitung.p<<endl;
    cout<<"Lebar = "<<hitung.l<<endl;
    cout<<"Jari-jari = "<<hitung.r<<endl;
    cout<<"Tinggi = "<<hitung.t<<endl;

    cout<<endl;

    cout<<"Luas Persegi Panjang = " <<  hitung.hitungPP()<<endl;

    cout<<"Luas Lingkaran = " << hitung.Luli()<<endl;

    cout<<"Volume Kerucut = " << hitung.VoCu()<<endl;

    cout<<"Volume Bola = "<<  hitung.VoBo()<<endl;


    cout<<endl;

    bidang bidang1;
    bidang1.p = 22;
    bidang1.l = 45;
    bidang1.r = 81;
    bidang1.t = 52;

    cout<<"Diketahui : "<<endl;
    cout<<"Panjang = "<<bidang1.p<<endl;
    cout<<"Lebar = "<<bidang1.l<<endl;
    cout<<"Jari-jari = "<<bidang1.r<<endl;
    cout<<"Tinggi = "<<bidang1.t<<endl;

    cout<<endl;

    cout<<"Luas Persegi Panjang = " <<  bidang1.hitungPP()<<endl;

    cout<<"Luas Lingkaran = " << bidang1.Luli()<<endl;

    cout<<"Volume Kerucut = " << bidang1.VoCu()<<endl;

    cout<<"Volume Bola = "<<  bidang1.VoBo()<<endl;

return 0;
}
