#include<iostream>
using namespace std;
int getPivot(int arr[],int size)
{
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    while (low<high)
    {
        if(arr[mid]>=arr[0]){
          low=mid+1;
        }
        else{
           high=mid;
        }
        mid=(low+high)/2;
    }
    return low;
    
}

int BinarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=(start+end)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
          int mid=(start+end)/2;

    }
    
}
int main(){
    int arr[5]={7,9,1,2,3};
    int n=5;
    int key=2;
    int pivot=getPivot(arr,5);
    // cout<<pivot;
    if(key>=arr[pivot] && key<=arr[n-1] ){
        cout<<BinarySearch(arr,pivot,n-1,key);
    }
    else{
        cout<< BinarySearch(arr,0,pivot-1,key);

    }
 


}