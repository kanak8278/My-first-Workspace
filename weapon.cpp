# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum;
    int decimal[n];

    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        sum=0;
        for (int i = 0; i < 10; i++)
        {
            int x = input[j]%10;
            input[j] = input[j]/10;
            sum = sum + (x<<i);
        }
        decimal[j]= sum;
        cout<<decimal[j]<<endl;
    }

    for (int i = 1; i < n; i++)
    {
        int m = decimal[i]^decimal[i-1];
        cout<<m<<endl;
    }
    
    

    

    
    
    
}