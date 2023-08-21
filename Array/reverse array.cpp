#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int reverse(int arr[], int size)
{
    int left = 0;
    int end = size - 1;
    while(left<end)
    {
        swap(arr[left], arr[end]);
        left++;
        end--;
    }
}

int main()
{
    int arr[6] = {2, 3, 1, 5, 6, 9};
    // result 9,6,5,1,3,2

    reverse(arr, 6);
    print(arr, 6);
}