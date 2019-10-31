#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long n;
    cin>>n;
    unsigned long p =n;
    int k=0;
    unsigned long i;
    unsigned long s=0;
    while(p>0)
    {
        p= p/10;
            k++;
    }

    int h=k;
    while(n>0)
    {
        i=n%10;
        s+=(i*k);
            k--;
        n/=10;
    }
    if (s%11==0 && h==10)
        cout<<"Special";
        else
        {
            cout<<"Not special";
        }
        

    
    return 0;
}
