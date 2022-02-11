#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp=*x;
   	*x=*y;
   	*y=temp;
}
void sort(int arr[] , int n)
{
	int idx;
    for(int i=0;i<n-1;i++)
    {
    	idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] <arr[idx])
            	idx=j;
            swap(arr[idx],arr[i]);
        }
    }
}
int main()
{
    int A[] ={10,9,8,7,6};
    int n = 5;
    sort(A,n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
