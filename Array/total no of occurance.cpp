#include <iostream>
using namespace std;
int FirstOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int LastOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 3, 3, 3, 4, 7};
    int key;
    cout << "enter your key to search" << endl;
    cin >> key;
    cout << "first occurance of key " << FirstOccurance(even, 6, key) << endl;
    cout << "Last occurance of key " << LastOccurance(even, 6, key) << endl;
    int totalOccurance = (LastOccurance(even, 6, key) - FirstOccurance(even, 6, key)) + 1;
    cout << totalOccurance;
}