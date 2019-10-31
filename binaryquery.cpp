# include <bits/stdc++.h>
using namespace std;

int fn1(int i, int num[])
{
    if(num[i]==0)
    {
        num[i]=1;
    }
    if(num[i]==1)
    {
        num[i]=0;
    }
}
int fn2(int zeros[], int num[])
{
    if(zeros[])
}


int main()
{
    int len1;
    cin>>len1;
    int len2;
    cin>>len2;
    int digits[len1];

    for (int i = 0; i < len1; i++)
    {
        cin>>digits[i];
    }
    
    int queries[len2];
    for (int i = 0; i < len2; i++)
    {
        cin>>queries[i];
    }

    vector<int>ones;
    vector<int>zeros;

    for (int i = 0; i < len2; i++)
    {
        if(queries[i]==1)
        {
            cin>>ones[i];
        }
        if(queries[i]==0)
        {
            cin>>zeros[i];
        }

    }
    for (int i = 0; i < len2; i++)
    {
        if(queries[i]==1)
        {
            for (int k = 0; k != ones.end(); k++)
            {
                digits
            }
            
        }
    }
    
    
    
}