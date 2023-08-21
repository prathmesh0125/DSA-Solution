#include<iostream>
using namespace std;

void  print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int moveZeros(int arr[],int size){
    int i=0;
    int j=0;
    // int n=size;
    while(i<size && j<size){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    
}

int main(){
    int arr[5]={0,4,0,2,0};
   moveZeros(arr,5);
   print(arr,5);
}