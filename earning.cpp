# include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        m=0;
        int n;
        cin>>n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        int x = sizeof(a)/sizeof(a[0]);
        sort(a, a+x);

        int key = a[0];
        // cout<<"key: "<<key<<endl;
        for (int l = 0; l < n; l++)
        {
            if(key==a[l])
            {
                ++m;
                // cout<<"Count of min"<<m<<endl;
            }
        }

        if(m%2==1)
        {
            // cout<<m<<"\t";
            cout<<"Lucky"<<endl;
        }
        if(m%2==0)
        {
            // cout<<m<<"\t";
            cout<<"Unlucky"<<endl;
        }

        
        

        
    }
    
}