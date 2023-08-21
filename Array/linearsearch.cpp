#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};

  int key;
  cout << "Entert the element you want to search" << endl;
  cin >> key;
  int found = LinearSearch(arr, 6, key);
  if (found)
  {
    cout << "element is present att location " << LinearSearch(arr, 6, key) << endl;
  }
  else
  {
    cout << "elment is not present" << endl;
  }
}