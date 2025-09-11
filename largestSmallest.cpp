#include <iostream>
using namespace std;

    int main()
    {
        int arr[] ={5,3,6,9,12};
        int n = sizeof(arr)/sizeof(int);

        int max = arr[0];
        int min = arr[0];

        for(int i =0 ; i<n;i++)
        {
            if(arr[i]> max){
                max = arr[i];
            }
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout<<"Largest element is:"<< max<<endl;
        cout<<"Smallest element is:"<< min<<endl;
    
    return 0;
    }
