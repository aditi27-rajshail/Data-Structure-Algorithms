// Transpose matrix naive method is to store in the temporary matrix
//Efficient method
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

const int R = 4, C=4;

void transpose(int arr[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=i+1;j<C;j++)
            swap((arr[i][j]),(arr[j][i]));

    }
    	for(int i = 0; i < R; i++)
	{
		for(int j = 0; j < C; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

}
int main()
{
	int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
     transpose(arr);



}
