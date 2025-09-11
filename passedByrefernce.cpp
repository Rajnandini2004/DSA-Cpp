#include <iostream>
using namespace std;

void printArr(int num[], int n )
{
    for(int i =0 ; i <n ; i++)
    {
        cout<<num[i]<<",";
    }
    cout<<endl;
}
int main ()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"array size is:"<<sizeof(arr)<<endl;
    printArr(arr,n);
    return 0;
}
