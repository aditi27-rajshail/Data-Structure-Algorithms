#include <iostream>
#include <cmath>
//Big O(n^2)
using namespace std;
/*
int maxC(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int cur_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            cur_sum+=arr[index];
            curr_max=max(curr_max,cur_sum);
        }
        res=max(res,curr_max);
    }
    return res;
}
*/
//Big O(n) Take maximum of normal max sub array(Kadane's algorithmn) and circular array
//circular sub array max = find minimum using Kadane and subtract from total sum of the array.
int normalMaxSum(int arr[], int n)
{
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;

}
int normalMinSum(int arr[], int n)
{
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=min(maxEnding+arr[i],arr[i]);
        res=min(res,maxEnding);
    }
    return res;

}
int OverallMaxSum(int arr[], int n)
{

    int max_normal=normalMaxSum(arr,n);
    if (max_normal<0)//all elements are negative
        return max_normal; //largest possible max array;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        //arr[i]=-arr[i];
    }
    int max_circular=arr_sum-normalMinSum(arr,n); // because inverted array so add with sum;
    return(max(max_circular,max_normal));


}
int main() {

     int arr[] = {5, -2, 3, 4}, n = 4;

     cout<<OverallMaxSum(arr, n);

}
