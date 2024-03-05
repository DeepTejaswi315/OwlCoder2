#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int target,flag=0;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==target) 
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1) cout<<"1";
    else cout<<"0";
}
