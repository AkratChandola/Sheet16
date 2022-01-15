#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n)
{
    int i,j,key; 
    for(i=1;i<n;i++)
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
    int n = 5;
    sort(A,n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
