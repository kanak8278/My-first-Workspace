# include<bits/stdc++.h>
using namespace std;

    
long double factorial (int n)
{
    if(n==0)
    return 1;

    else
    {
        return (n * factorial(n-1));
    }
}
 

 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int n;
     cin>>n;
     int number[n];
     for (int i = 0; i < n; i++)
     {
        cin>>number[i];
     }

     for (int i = 0; i < n; i++)
     {
        cout<<factorial(number[i])<<endl;
     }
    
 }