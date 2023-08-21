#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int BubbleSort(int arr[],int n){
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
               swapped=true;
            }
        }
        if(swapped==false){
            // already Sorted
            break;
        }
    }
}
int main(){
    // int arr[5]={6,2,8,4,10};
    int arr[5]={1,2,3,4,5};
    BubbleSort(arr,5);
    print(arr,5);
}