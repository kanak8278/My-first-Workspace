#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long x;
    unsigned long n;
    cin>>x;
    cin>>n;

    if (x%2==0)
    {
        if(n<=x/2)
        {
            cout<<2*n-1;
        }
        if(n>x/2)
        {
            cout<<2*(n-x/2);
        }
    }
    if (x%2==1)
    {
        if (n<=(x+1)/2)
        {
            cout<<2*n-1;
        }
        if (n>(x+1)/2)
        {
            cout<<2*(n-(x+1)/2);
        }
    }



}