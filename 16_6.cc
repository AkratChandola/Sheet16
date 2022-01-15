#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n,int k)
{
    int i,j,key; 
    for(i=1;i<k;i++)
    { 
        key=arr[i]; 
        j=i-1; 
        while(j>=0 && arr[j]>key)
        { 
            arr[j+1]=arr[j]; 
            j=j-1; 
        } 
        arr[j+1]=key; 
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
