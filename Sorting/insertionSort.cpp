#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

int InsertionSort(int arr[], int size)
{
    int i = 1;
    while (i < size)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;

        i++;
        
    }

// using for Loop
    // for (int i = 1; i < size; i++)
    // {
    //     int temp = arr[i];
    //     int j = i - 1;
    //     for (; j >= 0; j--)
    //     {
    //         if (arr[j] > temp)
    //         {
    //             arr[j + 1] = arr[j];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     arr[j + 1] = temp;
    // }
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    InsertionSort(arr, 7);
    print(arr, 7);
}
// timecomplexcity o(n^2)
// best case O(n) & WorstCase o(n^2)