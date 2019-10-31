# include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    int count;
    int num_cases;
    cin>>num_cases;
    int num_str[num_cases];
    int digits[1000000];
    vector<int>v;

    for (int i = 0; i < num_cases; i++)
    {
        cin>>num_str[i];
    }
    
    for (int i = 0; i < num_cases; i++)
    { 
        v.clear();
        l=0;
        count=1;
        while (num_str[i]!=0)
        {
            int x = num_str[i]%10;
            num_str[i]= num_str[i]/10;
            v.push_back(x);
            ++l;
            
        }
        
        sort(v.begin(),v.end());
        for (int j = 1; j < l; j++)
        {
            if(v[j]==v[j-1]+1)
            {
                count++;
                //cout<<count<<"\t"<<l<<endl;
                continue;
            }
            else
            {
                break;
            }
            
        }

        if (count==l)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }

    // for (int i = 0; i < l; i++)
    // {
    //     cout<<v[i]<<"\t";
    // }
    
    // for (int i = 0; i <l ; i++)
    // {
    //     cout<<digits[i]<<"\t";
    // }
    
    
}