#include <iostream>
using namespace std;
/*Naive method
int i=0
while(true)//infinite loop
{
    if(arr[i]==x)
        return i;
    if(arr[i]>x)
        return -1;
}
*/
int search(int arr[], int x)
{
    if(arr[0]==x)
    return 0;
    int i=1;
    while(arr[i]<x)
        i=i*2;
    if(arr[i]==x) return x;
    return bSearch(arr,i/2+1,i-1,x);//low ill be the last ith range so decide by 2+1(because every elements is multiplied by 2)
}



int bSearch(int arr[], int low,int high, int x)
{

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;

		else if(arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}
