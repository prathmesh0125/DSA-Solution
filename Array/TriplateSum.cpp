#include<iostream>
using namespace std;

void triplate(int arr[],int size,int result){
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
            cout<<i<<" "<<j<<" "<<k<<" ";
            cout<<endl;
            // if(arr[i]+arr[j]+arr[k]==result){
            //  cout<<arr[i]<<" ";
            //  cout<<arr[j]<<" ";
            //  cout<<arr[k]<<" ";
            //  cout<<endl;
            // }
        }
    }
}
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // ans=3,4,5=12
    int result=27;
    triplate(arr,10,result);

}