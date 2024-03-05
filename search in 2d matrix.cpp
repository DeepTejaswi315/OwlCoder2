#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target,flag=0;
    cin>>target;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j] == target) flag=1;
        }
    }
    if(flag==1) cout<<"true";
    else cout<<"false";
}
