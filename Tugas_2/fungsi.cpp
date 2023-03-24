#include <iostream>
#include "fungsi.h"

using namespace std;

/////////////////////fungsi mencari nilai tertinggi
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

/////////////////////fungsi mencari nilai terendah
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

/////////////////////fungsi mencari nilai tertinggi dalam array
int MaxArray(int arr[],int n){
    int i;
    int m=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]>m)
            m=arr[i];
    }

return m;
}

/////////////////////fungsi mencari nilai terendah dalam array
int MinArray(int arr[],int n){
    int i;
    int m=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]<m)
            m=arr[i];
    }

return m;
}

/////////////////////fungsi mencari nilai genap
bool isEven(int x){
    if(x % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}

/////////////////////fungsi mencari nilai ganjil
bool isOdd(int x){
    if(x % 2 != 0){
        return true;
    }
    else {
        return false;
    }
}

/////////////////////fungsi mencari apakah nilai yang di input merupakan faktor dari
bool isFactor(int a,int b){
    if(a % b == 0){
        return true;
    }
    else {
        return false;
    }
}


/////////////////////fungsi cari array
bool foundArray(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return true;
    }
  }
  return false;
}

/////////////////////fungsi cari array
int searchArray(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

/////////////////////fungsi menambah bilangan genap array
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


/////////////////////fungsi menambah bilangan ganjil array
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


