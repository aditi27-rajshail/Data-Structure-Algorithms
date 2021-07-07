//naive method check for 0 element and if found at i run a loop from j=i+1 to find a non zero element, If found call swap function.
// below is efficient method
#include <iostream>
using namespace std;
void remzero(int arr[], int n)
{
    int count=0;
    for (int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }


    }
}
int main()
{

      int arr[] = {10, 20, 0, 30, 0, 30}, n = 6;

      cout<<"Before Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       remzero(arr, n);

       cout<<"After Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

}
