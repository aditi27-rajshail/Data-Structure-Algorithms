//
#include <iostream>
#include <cmath>
using namespace std;
int maxConsecutiveOnes(int arr[],int  n)
{
    int curr=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            curr=0; //if 0 set curr =0
        else
        {
             curr++; // count number of zeros
             res=max(res,curr); //find max between previous current and
        }


    }
    return res;
}
int main() {

     int arr[] = {0, 1, 1, 0, 1, 1, 1}, n = 7;

     cout<<maxConsecutiveOnes(arr, n);

}
