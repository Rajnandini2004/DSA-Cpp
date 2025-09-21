#include <iostream>
using namespace std;
//kadane's Algorithm O(n)
void maxSubarraySum3(int arr[], int n)
{
    int maxSum = INT32_MIN;
    int currsum = 0;
  for(int i =0; i<n; i++)
  {
    currsum += arr[i];
    maxSum = max(maxSum, currsum);
    if(currsum < 0)
    {
        currsum = 0; 
  }
}
cout<<"Max Subarray Sum is : "<<maxSum<<endl;
}

int main() 
{
    int arr[4] = {2,-3,6,-5};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum3(arr, n);

    return 0;
}