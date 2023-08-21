#include<iostream>
using namespace std;


void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void reverse (int arr[],int low,int high){
   while(low<high){
    swap(arr[low],arr[high]);
    low++;
    high--;
   }
}



int main(){
    int arr[4]={-1,-100,3,99};
    int n=4;
    int k=2;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    Print(arr,4);
}