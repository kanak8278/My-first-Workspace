#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator point= v.begin();
    int num;
    cin>>num;
    for(int i=0; i<num; ++i)
    {
        int x;
        cin>> x;
        v.push_back(x);
    } 



    int l;
    int m;
    int n;
    cin>>l>>m>>n;
    v.erase(v.begin()+l-1);
    v.erase(v.begin()+m-1, v.begin()+n-1);
    cout<<v.size()<<endl;

    for(point=v.begin(); point<v.end(); ++point)
    {
        cout<<*point<<" ";
    } 



    return 0;
}