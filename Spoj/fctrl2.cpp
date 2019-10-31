#include <bits/stdc++.h> 
using namespace std;
// not according to question statement Required factorials of large numbers.
unsigned long long factorial(int number)
{
    if (number ==0)
    {
        return 1;
    }
    else if (number==1)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1);

    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcases;
    scanf("%d", &testcases);
    for (int i = 1; i <=testcases; i++)
    {
    int number;
    scanf("%d", &number);
    printf("%llu\n", factorial(number));
    }
    
    return 0;
    
}