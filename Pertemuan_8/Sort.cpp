#include <iostream>
using namespace std;

void inputA(int A[],int n);
void Swap(int &a, int &b);
void printArr(int A[],int n);
void insertS(int A[], int n);
void selectS(int A[],int n);

int main(){
    int n;
    cout<<"Masukkan Batas Array"<<endl;
    cout<<"=>";cin>>n;
    int arr[n];
    inputA(arr,n);

    selectS(arr,n);
    cout << "Array yang telah diurutkan menggunakan Selection Sort: "<<endl;
    printArr(arr,n);

    cout<<endl;

    insertS(arr,n);
    cout << "Array yang telah diurutkan menggunakan Insertion Sort: "<<endl;
    printArr(arr,n);

}

void Swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

//Prosedur Selection Sort
void selectS(int A[],int n){
    for(int i=0;i<n-1;i++){
        int Min=i;
        for(int j=i+1;j<n;j++){
            if (A[j]>A[Min]){
                Min=j;
            }
        }
        Swap(A[i], A[Min]);
    }
}

//Prosedur Insertion Sort
void insertS(int A[], int n){
    for (int i=1;i<n;i++){
        int j=i;
        while (j>=0 && A[j]>A[j-1]){
            Swap(A[j], A[j-1]);
            j--;
        }

    }
}


void inputA(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<"Masukkan Array ke"<<i<<" : ";
        cin>>A[i];
    }
}

void printArr(int A[],int n){
    for (int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
