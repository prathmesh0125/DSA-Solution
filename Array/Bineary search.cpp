#include <iostream>
using namespace std;
int BinearySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return 0;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};

    
    int key;
    cout<<"Entert the element you want to search"<<endl;
    cin>>key;
  int found= BinearySearch(arr,5,key);
  if(found){
    cout<<"element is present att location "<<BinearySearch(arr,5,key)<<endl;

  }
  else{
    cout<<"elment is not present"<<endl;
}
}
