#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int total=0;
    for(int i=1; i<=sqrt(n); ++i )
    {
        total= total + n/i - (i-1);
    }

    printf("%d", total);
}