#include<iostream>
using namespace std;

int find(int arr[],int size){
    int s1=0;
    for(int i=0;i<size;i++){
        s1=s1+arr[i];
    }
    int s2=size*(size+1)/2;

    int diff=s2-s1;

    return diff;

}

int main(){
    int arr[5]={1,2,3,5};
    cout<<find(arr,5);
}