#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
     mid=(s+e)/2;

    }
    return s;
}
int main(){
    int arr[5]={8,9,1,2,3};

    cout<<getPivot(arr,5);

    
    
}