// wrong 
# include <stdio.h>
int main()
{
    const int number = 1000000007;
    
    long long l=0;
    long long  n;
    long long  t;
    scanf("%lld",&n);
    scanf("%lld", &t);
    for (long long  i = 1; i <= n; i++)
    {
        long long  m=1;
        for (long long  k = 1; k <= t; k++)
        {
            m= (m%number*(i%number+k%number))%number;
        }
        l= (l%number +m%number)% number;
      
    }
    printf("%lld", l%number);
    
}