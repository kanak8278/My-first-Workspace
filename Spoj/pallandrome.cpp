#include <bits/stdc++.h>
using namespace std;
int pallandrome(string new_str)
{
    int flag =0;
    int l = new_str.length();

    string rev_str; //= new_str;
    //cout<<rev_str;
    for (int i = 0; i < new_str.length(); i++)
    {
        rev_str[i]= new_str[l-1-i];
       // cout<<rev_str[i]<<endl;

    }
    //cout<<rev_str;

    for (int i = 0; i < new_str.length(); i++)
    {
        if(rev_str[i]!= new_str[i])
        {
            flag =1;
            break;
        }
       // cout<<"I am on loop number:"<<i<<endl;
    }
    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
/*
    if(new_str == rev_str)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
 */ 
}




int main(){
    string str1;
    cin>>str1;
    //pallandrome(str1);

    if(pallandrome(str1))
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

    return 0;
    

      
}
