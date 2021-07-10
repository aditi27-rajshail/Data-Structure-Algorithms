#include <iostream>
#include <cmath>
using namespace std;
//BIg O(n^2)
/*
using namespace std;
int getWater(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)     //can trap water only between elemets
    {
        int lmax= arr[i];
        for(int j=0;j<i;j++)   //find max element on left of the element
            lmax=max(lmax,arr[j]);
        int rmax= arr[i];
        for(int j=i+1;j<n;j++)   //find max element on right of the element
            rmax=max(rmax,arr[j]);
            res=res+(min(lmax,rmax)-arr[i]);
    }
    return res;
}
*/
int getWater(int arr[],int n)
{
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n-1;i++)
        lmax[i]= max(lmax[i-1],arr[i]);
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]= max(rmax[i+1],arr[i]);
    for(int i=1;i<n-1;i++)
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    return res;

}
int main()
{

     int arr[] = {3, 0, 1, 2, 5}, n = 5;

     cout<<getWater(arr, n);

}
