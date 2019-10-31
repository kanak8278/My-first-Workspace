#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 int sod(int k)
    {int p=0;
        while(k>0)
        {
          p=p+(k%10);
            k/=10;
        }
     return p;
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

   int n;
    cin >>n;
    int f=1;

    for( int i=1; i<=n ; i++)
    {
        if(n%i==0)
        {
           if(sod(i)>f)
            f=i;
        }
    }
    cout<<f;

    return 0;
}
    
}