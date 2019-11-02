# include<bits/stdc++.h>
using namespace std;


int main()
{
    int size;
    cin>>size;

    string str;
    cin>>str;

    string::iterator itr = str.begin();
    // cout<<*itr;
    // cout<<*(itr+1);

    while (itr!= str.end())
    {
        if(*(itr+1)==*itr)
        {
            str.erase(itr, (itr+2) );
            // cout<<"String after deletion: "<<str<<endl;
            // cout<<"First character after deletion:"<<*itr<<endl<<endl;
            itr = str.begin();
        }
        else
        {
            itr++;
        }   
    }
    
    cout<<str.length()<<endl;
    cout<<str<<endl;
    
}