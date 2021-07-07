/*void leaders(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		bool flag = false;

		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] <= arr[j])
			{
				flag = true;
				break;
			}
		}

		if(flag == false)
		{
			cout<<arr[i]<<" ";
		}
	}
}
*/
//Efficient Method---but returns solution from right

#include <iostream>
using namespace std;
void leader(int arr[], int n)
{
    int curlead=arr[n-1];
    cout<<curlead<<" ";
    for(int i=n-2;i>=0;i--)
   {
       if(curlead<arr[i])
       {
        curlead=arr[i];
        cout<<arr[i]<<" ";
       }
   }
}
int main() {

      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

      leader(arr, n);

}
