#include<bits/stdc++.h>
# include<cmath>
# include <string>
# include <sstream>
using namespace std;
int main()
{
    string str ="";

    int count;
    cin>>count;

    string ins;
    cin>>ins;

    int array[count];

    int i=0;
    while (i<count)
    {
        array[i]= stoi(str.at(begin()+i));
        cout<<array[i];
        ++i;
    }
    for (int j = 0; j < count; j++)
    {

    switch (array[j])
    {
    case 1:
        str+="a";
        break;
    case 2:
        str+="bb";
    case 3:
        str+="ab";
    case 4:
        for (int l = 0; l < count; l++)
        {
            if(str[l]=='a')
                str[l]='b';
            if (str[l]=='b')
                str[l]='a';

        }
        
    default:
        break;
    }
    }
    cout<<str;
    
    return 0;

    
}