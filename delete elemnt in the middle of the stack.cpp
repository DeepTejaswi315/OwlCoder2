#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int s[l];
    for(int i=0;i<l;i++)
    {
        cin>>s[i];
    }
    if(l%2==0)
    {
        int m=(l/2)-1;
        for(int i=0;i<l;i++)
        {
            if(i==m)
            {
                continue;
            }
            else
            {
                cout<<s[i]<<" ";
            }
        }
    }
    else
    {
        int m=(l/2);
        for(int i=0;i<l;i++)
        {
            if(i==m)
            {
                continue;
            }
            else
            {
                cout<<s[i]<<" ";
            }
        }
    }
    return 0;
}
