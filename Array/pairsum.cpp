#include<iostream>
using namespace std;
void pairsum(int arr[],int size,int result){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==result){
                cout<<min(arr[i],arr[j])<<" ";
                cout<<max(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int arr[5]={2,3,4,5,6};
    // int ans=9
    int result=11;
    pairsum(arr,5,result);
}