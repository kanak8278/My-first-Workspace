#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int f;
        cin>>f;
        v.push_back(f);
    }
    int x;
    cin>> x;
    v.erase(v.begin()+(x-1));
    int a;
    int b;
    cin>>a>>b;
    v.erase(v.begin()+a, v.begin()+b);
      cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    

}