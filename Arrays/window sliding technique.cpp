//Maximum Sum of K Consecutive elements Naive method run loop from i to i+k-1 and another loop to add elements inside BigO(n^2)
//Maximum Sum of K Consecutive elements(Efficient) Window sliding technique
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int maxSum(int arr[], int n, int k)
{
    int cur_sum=0;
    for(int i=0;i<k;i++)
    {
        cur_sum+=arr[i];
    }
    int max_sum=cur_sum;
    for(int i=k;i<n;i++)
    {
        cur_sum+=arr[i]-arr[i-k];
        max_sum=max(max_sum,cur_sum);
    }
    return max_sum;
}

int main() {

     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

     cout<<maxSum(arr, n, k);

}
