#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int q;
    cin>>q;
    int number[n];
    int querie1[q];
    int querie2[q];
    int querie3[q];
    int total;
    
    for(int i=0; i<n; ++i)
    {
        cin>>number[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin>>querie1[i];
        cin>>querie2[i];
        cin>>querie3[i];
    }

   /* for(int i=0; i<n; ++i)
    {
        cout<<number[i];
        cout<<"\t";
    }
    

    for (int i = 0; i < q; i++)
    {
        cout<<querie1[i];
        cout<<"\t";
        cout<<querie2[i];
        cout<<"\t";
        cout<<querie3[i];
        cout<<"\n";
    }*/
    for(int i=0; i<q; ++i)
    {
         int sum =0;
        if(querie1[i]==1)
        {
            //cout<<"I am at first if.\n";
            number[querie2[i]]= querie3[i];
            //cout<<number[querie2[i]]<<endl;
            continue;
        }
        if(querie1[i]==2)
        {
            if(querie2[i]>= 0 && querie2[i]<n && querie3[i]>= 0 && querie3[i]<n)
            {
                //cout<<"I am at 2nd if.\n";
                for(int l=querie2[i]; l<=querie3[i]; ++l)
                {
                    sum= sum+ number[l];
                }   
                cout<<sum<<endl;  
            }
            else
            {
                cout<<"-1\n";
            }
            
        }
        
        
    }
    
    return 0;
}
