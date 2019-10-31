# include<bits/stdc++.h>
using namespace std;


int expomod(int a, int b, int c)
{
    if ( a == 0)
    return 0;
    if (b == 0)
    return 1;

    long y;

    if (b%2==0)
    {
        y= expomod(a, b/2, c);
        return (y * y)% c;
    }
    else
    {
        y = expomod(a, b/2, c);
        return (((y*y)%c)*a)%c;
    }
    
}

int main()
{
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    cout<<expomod(a, b, c);


}
