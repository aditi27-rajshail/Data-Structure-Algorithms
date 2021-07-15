//Peak highest element is such that the both numbers are less on either side
/*
naive method
    if(n == 1)         //if only one element is present
		return arr[0];
	if(arr[0] >= arr[1]) // check corner cases
		return arr[0];
	if(arr[n - 1] >= arr[n - 2])
		return arr[n - 1];

	for(int i = 1; i < n - 1; i++)
		if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			return arr[i];
Efficient method to use Bsearch even though the array is not sorted the other half is ignored and every array has a peak element*/
#include <iostream>
using namespace std;
int getPeak(int arr[], int n)
{
	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&  //corner cases
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid]) //move on the left side
				high = mid -1;
			else
				low = mid + 1;                      //move on right side
		}
	return -1;
}

int main() {


 int arr[] = {5, 20, 40, 30, 20, 50, 60}, n = 7;

 cout << getPeak(arr, n);

	return 0;
}
