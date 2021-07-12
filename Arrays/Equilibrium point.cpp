//Check Equilibrium point such that every element on the left side is equal to the sum of the right side.
//naive method-Big O(n^2)
/*for(int i  = 0; i < n; i++)
	{
		int l_sum = 0, r_sum = 0;

		for(int j = 0; j < i; j++)
			l_sum += arr[j];

		for(int j = i + 1; j < n; j++)
			r_sum += arr[j];

		if(l_sum == r_sum)
			return true;
	}

	return false;*/
#include <iostream>
#include <cmath>
using namespace std;
//Efficient method
bool checkEquilibrium(int arr[],int n)
{
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++)
    {
        if(l_sum==arr_sum-arr[i])
            return true;
        else
            l_sum+=arr[i];
            arr_sum-=arr[i];
    }
    return false;

}
int main() {

      int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;

      printf("%s",checkEquilibrium(arr, n)? "true" : "false");


}
