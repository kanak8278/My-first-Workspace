#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int num[n];
    

    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }

    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(num[i]%k==0)
        {
            ++j;
        }
        else
        {
            continue;
        }
        
    }
    cout<<j<<endl;
    
    return 0;

    
}

