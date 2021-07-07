#include <iostream>
using namespace std;
//the loop runs n/2 times hence Big O(N)
void reverse(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp= arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main() {

      int arr[] = {1, 2, 3, 4}, n = 4;

      cout<<"Before Reverse"<<endl;

       for(int i=0;i<n; i++)
       {
        cout<<arr[i]<<" ";
       }

       cout<<endl;

       reverse(arr, n);

       cout<<"After Reverse"<<endl;

       for(int i=0;i < n; i++)
       {
        cout<<arr[i]<<" ";
       }

}
