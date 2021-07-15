#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == 0 || arr[mid - 1] != arr[mid])
				return mid;

			else
				high = mid - 1;
		}

	}

	return -1;
}
/*Recursive
int firstOccR(int arr[], int low,int high, int x)
{
    if(low>high)
        return -1;
    int mid=low+high/2;
    if(x > arr[mid])
        return firstOccR(arr,mid+1,high,x);
    else if(x < arr[mid])
        return firstOccR(arr,low,mid-1,x);
    else{
        if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
        else
            return firstOccR(arr,low,mid-1,x);
    }

}*/



int lastOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == n - 1 || arr[mid + 1] != arr[mid]) //the element can be either on last element
				return mid;

			else
				low = mid + 1;
		}

	}

	return -1;
}
/* Reccursive
int lastOccR(int arr[], int low, int high, int x, int n)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(x > arr[mid])
		return lastOcc(arr, mid + 1, high, x, n);

	else if(x < arr[mid])
		return lastOcc(arr, low, mid - 1, x, n);

	else
	{
		if(mid == n - 1 || arr[mid + 1] != arr[mid])
			return mid;

		else
			return lastOcc(arr, mid + 1, high, x, n);
	}
}*/

int countOcc(int arr[], int n, int x)
{
	int first = firstOcc(arr, n, x);

	if(first == -1)
		return 0;
	else
		return lastOcc(arr, n, x) - first + 1;
}

int main() {

   int arr[] = {10, 20, 20, 20, 40, 40}, n = 6;

   int x = 20;

   cout << countOcc(arr, n, x);
   return 0;
}
