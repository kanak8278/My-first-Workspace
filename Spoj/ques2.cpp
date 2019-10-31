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
    for (int i = start; i <= end; i++)
    {
        elements.insert(i);
    }
    

    set<int> input;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        input.insert(x);

    }


    // set<int>::iterator itr;

    // for (itr= elements.begin(); itr!=elements.end() ; itr++)
    // {
    //     cout<<*itr<<"\t";
    // }
    // cout<<endl;

    // for (itr = input.begin(); itr != input.end(); itr++)
    // {
    //     cout<<*itr<<"\t";
    // }
    // cout<<endl;
    
    if(input==elements)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    

    return 0;
} 