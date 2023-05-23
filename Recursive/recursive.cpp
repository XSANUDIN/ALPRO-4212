#include <iostream>


using namespace std;

int penjumlahan(int a,int b);
int perkalian(int a,int b);
int pengurangan(int a,int b);
int pembagian(int a,int b);
int pangkat(int a,int b);

int main(){
    int x,y;
    cout<<"Masukkan Bilangan Pertama"<<endl;
    cin>>(x);
    cout<<"Masukkan Bilangan Kedua"<<endl;
    cin>>(y);
    cout<<pangkat(x,y);


return 0;
}


int penjumlahan(int a,int b){
    if (a==0){
        return b;
    }
    else{
        return 1+penjumlahan(a-1,b);
    }
}

int perkalian(int a,int b){
    if (a==0 || b==0){
        return 0;
    }
    else{
        return b+perkalian(a-1,b);
    }
}

int pembagian(int a,int b){
    if (a<b){
        return 0;
    }
    else{
        return 1+pembagian(a-1,b);
    }
}

int pengurangan(int a,int b){
    if (a==0){
        return b;
    }
    else{
        return pengurangan(a-1,b-1);
    }
}

int pangkat(int a,int b){
    if (b==0){
        return 1;
    }
    else{
        return a*pangkat(a,b-1);
    }
}
