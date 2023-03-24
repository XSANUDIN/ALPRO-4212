#include <iostream>
#include "fungsi.h"

using namespace std;

void name(){

cout <<"my name is wkwk"<<endl;

}

int Max(int a,int b){
    int m;
    if (a>b){
        m=a;
    }
    else {
        m=b;
    }
return m;
}

int Min(int a,int b){
    int m;
    if (a<b){
        m=a;
    }
    else {
        m=b;
    }
return m;
}

int MaxArray(int arr[],int n){
    int i;
    int m=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]>m)
            m=arr[i];
    }

return m;
}

int MinArray(int arr[],int n){
    int i;
    int m=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]<m)
            m=arr[i];
    }

return m;
}

bool isEven(int x){
    if(x % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}

bool isOdd(int x){
    if(x % 2 != 0){
        return true;
    }
    else {
        return false;
    }
}

bool isFactor(int a,int b){
    if(a % b == 0){
        return true;
    }
    else {
        return false;
    }
}

int searchArray(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return 0 ;
        }
    }
    return -1; // return -1 if the key is not found in the array
}

int Search(int a, int arr[]){
    for(int i=0;i<a;i++){
        if (arr[i] == a){
            return a;
        }
        else{
            return -1;
        }
    }
}

bool Found(int arr[],int x){
    int size;
    for(int i=0;i<size;i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}


int SumEven(int arr[],int n){
    int i;
    int m=0;
    for(i=0;i<n;i++){
        if (arr[i] % 2 == 0){
            m+=arr[i];
        }
    }

return m;
}

int SumOdd(int arr[],int n){
    int i;
    int m=0;
    for(i=0;i<n;i++){
        if (arr[i] % 2 != 0){
            m+=arr[i];
        }
    }

return m;
}


