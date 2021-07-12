#include <iostream>
#include <cmath>
using namespace std;
//the element should appear more than n/2 times
//naive method if arr[i]==arr[j]; count++; if(count >n/2)return count(Big O(n^2)
//Moore's voting Algorithm.
int findMajority(int arr[], int n)
{
	int res = 0, count = 1;

    for(int i = 1; i < n; i++)
    {
    		if(arr[res] == arr[i])
    			count++;              //count is to keep track of the majority element.
    		else
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    }

    count = 0;

    for(int i = 0; i < n; i++)
        {
            if(arr[res] == arr[i])
            count++;
        }
    	if(count <= n /2)
    		res = -1;

    	return res;
}

int main() {

     int arr[] = {8, 8, 6, 6, 6, 4, 6}, n = 7;

     cout<<findMajority(arr, n);

}

