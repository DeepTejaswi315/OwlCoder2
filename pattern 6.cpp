#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
