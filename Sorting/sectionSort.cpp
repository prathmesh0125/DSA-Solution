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

int selectionSort(int arr[], int n)
{
    // int size=n-1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                // print(arr,5);

                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    // int arr[5] = {9, 4, 7, 2, 5};
    // int arr[5]={6,2,8,4,10};
    // int arr[4]={4,3,2,1};
     int arr[5]={4,3,5,2,1};
    selectionSort(arr, 5);
    print(arr, 5);
}