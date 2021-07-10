//Naive approach call the get Largest method and check the second largest-Traversing loop 2 times
/*
int SecondLargest(int arr[],int n)
{
   int largest=largest(arr,n);
   int res=-1;
   for(int i=0;i<n;i++)
   {
    if(arr[i]!=arr[largest])
      {
        if(res==-1)
        res=i;                     //never acquired a new element.. initialises the result as the first element which is not equal to largest.
        else if(arr[i]>arr[res])
        res=i;
      }
   }
   return res;
}
*/
//Efficient approach only travel once

#include <iostream>
#include <cmath>
using namespace std;
int SecondLargest(int arr[],int n)
{
   int res=-1,largest=0;
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[largest])
        {
        res=largest;
        largest=i;
        }
       else if(arr[i]!=arr[largest])
       {
        if(res==-1||arr[i]>arr[res])  //if sencond largest element was never obtained (if res==-1) set res=i
            res=i;
       }
   }
   return arr[res];
}
int main()
{
    int arr[]={2,5,7,8};
    cout<<SecondLargest(arr,4);
}

