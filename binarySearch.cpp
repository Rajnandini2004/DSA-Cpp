#include <iostream>
using namespace std;

int binarySearch(int arr[], int n , int key)
{
    int start = 0 , end = n-1;

    while(start <= end)
    {
        int mid = (start + end )/ 2;
        if(arr[mid] == key)
        {
            return mid; // key found at index mid
        }
        else if(arr[mid] < key)
        {
            start = mid + 1; // search in right half
        }
        else {
            end = mid - 1; // search in left half
        }
    }
    return -1; // key not found

}

int main()
{
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);

    cout<<binarySearch(arr, n, 14)<<endl;
    return 0;
}