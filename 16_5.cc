#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp=*x;
   	*x=*y;
   	*y=temp;
}
void sort(int arr[],int n,int k)
{
	int idx;
    for(int i=0;i<k;i++)
    {
    	idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] <arr[i])
            	idx=j;
            swap(arr[idx],arr[i]);
        }
    }
}
int main()
{
    int A[] ={10,9,8,7,6};
    int n=5;
    int k;
    cout<<"Enter the iteration:"<<endl;
    cin>>k;
    sort(A,n,k);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
