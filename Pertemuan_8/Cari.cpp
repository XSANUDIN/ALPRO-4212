#include<iostream>
using namespace std;


void printArr(int A[],int n);
void insertArr(int A[],int n);
void nilaiGT(int A[],int n);
int isOdd(int x);

int main(){
    int n;
    cout<<"Masukkan Batas Array"<<endl;
    cin>>n;
    int arr[n];
    insertArr(arr,n);
    printArr(arr,n);
    nilaiGT(arr,n);


return 0;
}

void nilaiGT(int A[],int n){
    int genapk = -1;
    int igenapk = -1;

    for (int i = 0; i < n; i++) {
    if (!isOdd(A[i]) && (genapk == -1 || A[i] < genapk)) {
        genapk = A[i];
        igenapk = i;
        }
    }
    
    if(igenapk !=-1){
        cout << "Nilai genap terkecil dalam array adalah : " << genapk<<endl;
        cout << "Ada di Index : "<<igenapk<<endl;
    }
    else{
        cout << "tidak ditemukan Nilai genap";
    }

}


int isOdd(int x){

return x % 2 !=0;

}


void printArr(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void insertArr(int A[],int n){
    for (int i=0;i<n;i++){
        cout<<"masukkan elemen array ke-"<<i+1<<"  ";
        cin>>A[i];
    }
}
