#include <iostream>
#include <cmath>
//Big O(n) Kalden's algorithm
using namespace std;
int maxEvenOdd(int arr[], int n)
{
    int res=1, cur=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i-1]%2==0 && arr[i]%2!=0))
        {
            cur++;
            res=max(res,cur);
        }
        else
           cur=1;
    }
    return res;
}
int main() {

     int arr[] = {5, 10, 20, 6, 3, 8}, n = 6;

     cout<<maxEvenOdd(arr, n);

}
