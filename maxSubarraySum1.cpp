#include <iostream>
using namespace std;
//Brute Force Approach O(n^3)
void maxSubarraySum1(int arr[], int n)
{
    int maxSum = INT32_MIN;
    for(int start =0; start<n; start++)
    {
        for(int end = start; end<n; end++)
        {
            int currsum = 0;
            for(int i = start; i<=end; i++)
            {
                currsum += arr[i];
            }
            cout<<currsum<< ",";
            maxSum = max(maxSum, currsum);

        }
        cout<<endl;
    }
    cout<<"Max Subarray Sum is : "<<maxSum<<endl;
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum1(arr, n);

    return 0;
}