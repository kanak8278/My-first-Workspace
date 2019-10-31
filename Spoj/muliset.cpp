# include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>num;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    sort(num.begin(), num.end());
    int min = *num.begin();
    int max = * num.end();
    set<int>set1;
    set1.insert(num.begin(), num.end());
    set<int>set2;
    set<int>::iterator itr= set2.begin();

    for(int i=0; i<(max-min+1); ++i)
    {
        int y = min+i;
        set2.insert(y);

    }
    for(itr= set2.begin(); itr!= set2.end();)
    {
        cout<<*itr;
    }
    if(set1==set2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    

    
    
    
    /*for (i = 0; i < n; i++)
    {
        if(num.at(i)==(min+i))
        {
            continue;
        }
        else
        {
            cout<<"NO";
            break;

        }
    }
    if(i==n)
    {
        cout<<"YES";
    }*/
    


        
    
    

}