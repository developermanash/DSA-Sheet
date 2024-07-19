//reverse an array using recursion.
#include<bits/stdc++.h>
using namespace std;

void print(int i,int arr[],int n)
{
    if(i>=n/2)
        return;

    swap(arr[i],arr[n-1-i]);

    print(i+1,arr,n);
}

int main()
{
    int arr[]={5,4,8,3,6,1};
    print(0,arr,6);

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}