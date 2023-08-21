#include <iostream>
using namespace std;
int TotalOccarance(int arr[], int size, int key)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    int even[10] = {1, 3, 3, 3, 3, 3, 3, 3, 4, 7};
    int key;
    cout << "enter your key to search" << endl;
    cin >> key;
    cout << "Total occurance of key "<<TotalOccarance(even, 10, key);
}
// timeComplexcity is O(n)