#include<iostream>
using namespace std;
int getIntersection(int arr1[],int n,int arr2[],int m){

    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;

        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }

}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={1,3,5};

    getIntersection(arr1,5,arr2,3);
}