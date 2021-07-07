#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
   for(int i=1;i<n;i++)
   {

         if(arr[i]<arr[i-1]) //by using only one loop;
            return false;
   }
   return true;
}
int main()
{
    int arr[]={2,4,6,8,1};
    int n=5;
    cout<<(isSorted(arr, n)? "true": "false");
}

