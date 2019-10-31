#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    int k;
    cin>>k;

    long long int num = x;
   // cout<<x<<"\t"<<num<<endl;
    int len=0;
    while (x!=0)
    {
        x = x/10;
        ++len;
    }
    //cout<<len<<endl<<endl;
    
    int a[len];
    int i=0;
    while (i < len)
    {
        int remainder = num%10;
        a[i] = remainder;
        num = num/10;
        ++i; 
    }
    

    int l=1;
    for (int i = len-1; i >= 0; i--)
    {
        if(l<= k)
        {
            if(a[i]==9)
            {continue;}
            else
            {
                a[i]=9;
                ++l;
            }
        }
        else
        {
            break;
        }
        
    }
      for (int i = len-1; i >= 0; i--)
    {
        cout<<a[i];
    }
    
    
    

    
        
}