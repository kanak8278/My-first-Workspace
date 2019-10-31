# include <bits/stdc++.h>
# include <string>
using namespace std;
int main()
{
    string a1;
    string a2;
    cin>> a1 >> a2;
    cout<< a1.length()<< " "<<a2.length()<<"\n";
    cout<<a1+a2<<"\n";
    string s1;
        s1[0] = a1[0];
        a1[0] = a2[0];
        a2[0] = s1[0];
        cout<< a1<<" "<<a2<<"\n";
    return 0;


}