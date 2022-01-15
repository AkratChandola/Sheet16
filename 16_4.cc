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
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int A[]={10,9,8,7,6};
    int n=5;
    int k;
    cout<<"Enter the iteration:"<<endl;
    cin>>k;
    sort(A,n,k);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
