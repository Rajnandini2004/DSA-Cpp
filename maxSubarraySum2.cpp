#include <iostream>
using namespace std;
//Brute Force Approach O(n^2)
void maxSubarraySum2(int arr[], int n)
{
    int maxSum = INT32_MIN;
    for(int start =0; start<n; start++)//start 2
    {
        int currsum = 0;    
        for(int end = start; end<n; end++)//end 2,,3,4,5
        {
           currsum += arr[end];
            maxSum = max(maxSum,currsum);

        }
    }
    cout<<"Max Subarray Sum is : "<<maxSum<<endl;
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum2(arr, n);

    return 0;
}