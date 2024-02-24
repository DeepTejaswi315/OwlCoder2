#include<bits/stdc++.h>
using namespace std;

int binary_s(int *arr,int n,int se,int low,int high)
{
    if(low>high) return -1;
    else
    {
        int mid=(low+high)/2;
        if(arr[mid]==se) return mid;
        else if(arr[mid]<se) return binary_s(arr,n,se,mid+1,high);
        else return binary_s(arr,n,se,low,mid-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int se;
    cin>>se;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=binary_s(arr,n,se,0,n+1);
    cout<<res;
    return 0;
}
