#include <iostream>
//#include<bits/stdc++.h> 
#include <vector> 
using namespace std;

int main()
{
    vector<int>v;
    
   /* for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
       cout << v[i] << " ";
    }*/

    v.assign(5,10);
    for (int i = 0; i < v.size(); i++)
    {
       cout<< v[i] << " ";
    }
    v.push_back (15);
    cout<<"\n"<< v.back()<<"\n";
    v.pop_back();
    v.resize(4);
    for (int i = 0; i < v.size(); i++)
    {
       cout<< v[i] << " ";
    }
    int n =v.size();
    cout << n << "\n" ;
    v.clear();
    int k =v.size();
    cout<< k ;
    


    return 0;
    
}