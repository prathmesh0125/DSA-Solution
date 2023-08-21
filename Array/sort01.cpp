#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sort01(int arr[],int size){
    int i=0;
    int j=size-1;
  while(i<j)
  {
    if(arr[i]==0){
        i++;
    }
    else if(arr[j]==1){
        j--;
    }
    else if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
  }
    
}
int main(){
    int arr[7]={1,0,1,0,1,0,1};
   sort01(arr,7);
   print(arr,7);
}