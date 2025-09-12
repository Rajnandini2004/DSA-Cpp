#include <iostream>
using namespace std;
int Linearsearch(int arr[], int n , int key)
{
    for(int i =0 ; i<n ; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
 {
    int arr[] = {5,3,6,9,19,12};
    int n = sizeof(arr)/sizeof(int);
     cout<<Linearsearch(arr,n,19)<<endl;
    return 0;
 }