# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];

    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i]+b[i];
        cout<<c[i]<<" ";
    }
    
    
}