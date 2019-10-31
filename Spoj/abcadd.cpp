#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    // char a= 'a';
    // char b = 'b';
    // char c = a+b;
    // int sum = int(a) + int (b);
    // cout<< sum;
    // cout<< char (sum - 96);
    int n;
    cin>>n;

    string str[n];
    for (int j = 0; j < n; j++)
    {
        cin>>str[j];
    }
    
    for(int s=0; s<n; s++)
    {
        string:: iterator itr;
    int length = str[s].length();
    // cout<<str1.length()<<endl;

    int k=1;
    for (itr = str[s].begin(); itr != str[s].end(); itr++)
    {
        // cout<<str1.at(length-1-i);
        int c1 = (*itr)-96;
        int c2 = str[s].at(length-1-k)-96;
        int c3= c1+c2;
        if(c3>26)
        {
            c3= c3-26;
        }
        // cout<<c1<<"\t"<<c2<<"\t"<<c3<<"\t"
        cout<<char(c3+96);
        ++k;
    }

        cout<<endl;
    }
    

    
    return 0;
}