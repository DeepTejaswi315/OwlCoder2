#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int arr[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row,m=0;
    for(int i=0;i<r;i++)
    {
        int max1=0;
        for(int j=0;j<r;j++)
        {
            if(arr[i][j]==1)
            {
                max1++;
            }
        }
        if(max1>m)
        {
            m=max1;
            row=i;
        }
    }
    cout<<row;
    return 0;
}
