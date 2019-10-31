# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int number[n];
    for (int i = 0; i < n; i++)
    {
        cin>>number[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if(number[i]==number[k]+1 || number[k]==number[i]+1 )

        }
        
    }

}