#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    float sum =0;
    cin>>n;

    long long x[n];
    long long y[n];

    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
       // cout<<"\t";
        cin>>y[i];
    }
    /*for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<"\t"<<y[i];
        cout<<"\n";
    }*/


    for (int i = 0; i+1 < n; i++)
    {
        sum = sum + 0.5 * ( (y[i+1] + y[i]) * abs(x[i+1] - x[i]) );
      //  cout<<sum<<"\t";
    }
    printf("%.1f", sum);
    //cout<<sum;

    
    


} 