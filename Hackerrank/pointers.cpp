#include<iostream>
using namespace std;
int main()
{
int a[3];
short int zm;
int * const p = &a[0];
cout<<p<< endl;
cout<<a<< endl;
cout<<&a[0]<< endl;
return 0;
}
