#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i =0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() 
{
    int arr[] = {3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n -1;

    while(start < end )
    {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
    printArray(arr,n);
    return 0;
}