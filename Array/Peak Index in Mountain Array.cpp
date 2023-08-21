// find peak index in array

#include <iostream>
using namespace std;
int PeakIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    mid = start + (end - start) / 2;

    }
    return start;
}

int main()
{
    int arr[4] = {0, 10, 5, 2};
    // int peakIndex= PeakIndex(arr, 4);
    cout << "Peak Index In Given Array " << PeakIndex(arr, 4);
}
// Time Complexity O(logn);