#include<iostream>
using namespace std;
void Print(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
int SwapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
    //    swap(arr[i],arr[i+1]);
     int temp=arr[i+1];
     arr[i+1]=arr[i];
     arr[i]=temp;
        }
    }
}
int main(){
    int arr[6]={1,3,2,7,11,8};

    SwapAlternate(arr,6);
    Print(arr,6);
}
