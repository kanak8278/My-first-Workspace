#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int num[n];
    for (int i = 0; i <= n; i++)
    {
        num[i]=i;
    }


    int l;
    for (l = 2; l <= n; l++)
    {
        if(num[l]!= -1)
        {   
            int x=l+1;
            while (x<=n)
            {
                if(num[x] % num[l]==0)
                {
                    num[x]=-1;
                }
                ++x;
            }
            
            
            
        }
    }
    
    for (int i = 2; i < n; i++)
    {
        if(num[i]!=-1)
        cout<<num[i]<<endl;
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}