#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    int flag =0;
    int seat;
    cin>>seat;

    for(int k=0; ;++k)
    {
        if(seat==12*k)
        {
            flag =1;
            return flag;
            n=k;
            break;
            
        }
        if(seat ==12*k+1)
        {
            flag =2;
            return flag;
            n=k;
            break;
        }
        if(seat == 6*k)
        {
            flag=3;
            return flag;
            n=k;
            break;
        }
        if(seat == 6*k+1)
        {
            flag =5; 
            return flag;
            n=k; 
            break;
        }

    }
    if(flag ==1)
    {
        int oppt = 12*(n-1)+1
    }


return 0;
}