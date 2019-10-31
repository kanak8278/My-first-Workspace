#include <stdio.h>

int main()
{
    // printf(" Finding trailing zeroes for factorial.\n");
    
    long long number;
    long long fcount;
    long long count;
    printf("Your number: ");
    scanf("%lld", &number);
    for(int i=5; i<=number; i=i*5)
    {
        count = number/i;
        fcount += count;
    }   
    printf("%lld\n\n", fcount);     


    

    

    return 0;



}