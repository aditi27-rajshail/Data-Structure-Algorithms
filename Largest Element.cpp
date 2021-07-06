#include <iostream>
#include <cmath>
//using 2 loops(i and j)then Big O(N^2)
//This program uses Big O(N)
using namespace std;
int largest(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
}
int main()
{
    int arr[]={2,5,7,8};
    cout<<largest(arr,4);
}
