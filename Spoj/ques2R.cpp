# include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int start;
    cin>>start;
    int end;
    cin>>end;

    set<int>elements;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        elements.insert(x);
    }
    int k = elements.size();
    set<int>::iterator itr;
    int j=0;
    for (itr = elements.begin(); itr != elements.end(); itr++)
    {
        if(*itr>=start && *itr<=end)
        {
            ++j;
            continue;
        }
        else
        {
            break;
        }
        
    }
    if(j==k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

}