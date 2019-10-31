#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int G;
    int B;
    while (1)
    {
        cin>>G>>B;
        if(G==-1 || B==-1)
        {
           // cout<<"I am at 1.";
            break;
        }
        if(G==B)
        {
           // cout<<"I am at 2.";
            cout<<"1"<<"\n";
        }
        if(G==0 || B==0)
        {
           // cout<<"I am at 3.";
            cout<< G+B<<"\n";
        }

        if(G!=0 && B!=0)    
        {    
            if(G>B)
            {
                int k = G/(B+1);
               // cout<<"I am at 4.";
                cout<<k+1<<"\n";
            }
            if(G<B)
            {
                int k = B/(G+1);
              //  cout<<"I am at 5.";
                cout<<k+1<<"\n";
            }
        }

      
    }
    
    
}