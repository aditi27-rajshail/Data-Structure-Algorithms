#include <iostream>
#include <cmath>
using namespace std;
/*

int maxSum(int arr[], int n)
{
	int res = arr[0];

	for(int i = 0; i < n; i++)
	{
		int curr = 0;

		for(int j = i; j < n; j++)
		{
			curr = curr + arr[j];

			res = max(res, curr);
		}
	}

	return res;
}*///Kadane's algorithm Big O(n)
int maxSum(int arr[], int n)
{
    int maxEnding=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding= max(maxEnding+arr[i],arr[i]);
        res=max(maxEnding,res);
    }
    return res;
}
int main() {

     int arr[] = {1, -2, 3, -1, 2}, n = 5;

     cout<<maxSum(arr, n);

}
