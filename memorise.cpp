# include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }

    int t;
    cin>>t;
    int test_case[t];
    for (int i = 0; i < t; i++)
    {
        cin>>test_case[i];
    }

    for (int k = 0; k < t; k++)
    {
        int l =0;
        for (int m = 0; m < n; m++)
        {
            if(test_case[k]==num[m])
            ++l;
            else
            continue;
        }
        if(l==0)
        cout<<"NOT PRESENT"<<endl;
        else
        {
            cout<<l<<endl;
        }
        
        
    }
    
    


    
}