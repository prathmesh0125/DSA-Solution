// Peak index by usiing linearSearch

#include<iostream>
using namespace std;

int PeakIndex(int arr[],int size){
    int PeakIndex=INT16_MIN;
    int ans=0;
    for(int i=0;i<size;i++){
        if(arr[i]>PeakIndex){
            PeakIndex=arr[i];
            ans=i;
        }
        // cout<< PeakIndex;
    }
    return ans;
}

int main(){
    int arr[4]={23,10,5,12};
    cout<<"Peak Index of Array Is "<<PeakIndex(arr,4);
}