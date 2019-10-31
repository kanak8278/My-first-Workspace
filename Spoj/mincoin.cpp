# include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    int i =1;
   // cout<<n<<endl;

  
    int sum=0;

    while (sum <= n)
    {
        sum=sum+i;
        if(sum <= n)
        {
            ++i;
        }
    }
    cout<<i;

    

  /*  int j=0;
    while ( j*(j+1) <= 2*n)
    {
        if(j*(j+1) <= 2*n)
        {
            ++j;
        }
        cout<<j<<"\t";
    }
    cout<<j+1<<endl;
    */
    

    return 0;
}