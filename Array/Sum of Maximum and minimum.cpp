#include<iostream>
using namespace std;

int sum(int arr[],int size){
     int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
      maxi=max(maxi,arr[i]);
    }

     int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        mini=min(mini,arr[i]);
    }

	return maxi+mini;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<sum(arr,6);

}
