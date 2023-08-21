#include<iostream>
using namespace std;
int BuyAndSell(int arr[],int size){
    int Min_price=arr[0];
    int MaxProfit=0;
    for(int i=1;i<size;i++){
        if (arr[i]<Min_price)
        {
            Min_price=arr[i];
         
        }
        else{
           MaxProfit=max(MaxProfit,arr[i]-Min_price);
        }
        // cout<<MaxProfit<<endl;
    }
    return MaxProfit;

}

int main(){
    // int arr[6]={7,1,5,3,6,4};
    int arr[6]={9,3,2,1,2,3};
    cout<<BuyAndSell(arr,6);

}