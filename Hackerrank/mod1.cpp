#include<iostream>
using namespace std;

unsigned long long factorial(int n) 
{ 
	const unsigned int M = 1000000007; 
	unsigned long long f = 1; 

	for (int i = 1; i <= n; i++) 
		f = (f% M * i% M)% M; // WRONG APPROACH as 
					// f may exceed (2^64 - 1) 

	return f ; 
} 
int main() {
    int n;
    cin>>n;
    factorial(n);
    cout<< factorial(n);
    return 0;
}