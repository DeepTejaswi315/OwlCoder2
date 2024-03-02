//#Palindrome Number
//------------------
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int r,rev=0,i;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev) cout<<"YES";
    else cout<<"NO";

}
