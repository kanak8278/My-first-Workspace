#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    unsigned long a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int l =1;
    int m=0;
    while (m<n)
    {
       if(a[m]<=a[m+1])
        {
            continue;
        }
        else
            {
                ++l;
                break;
            }
            
        
        ++m;
    }
    cout<<l;

    return 0;
    
}