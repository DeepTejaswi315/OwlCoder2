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
    int c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j] < 0)
            {
                c++;
            }
        }
    }
    cout<<c;
}
