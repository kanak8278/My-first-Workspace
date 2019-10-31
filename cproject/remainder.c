#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d\n %d", &a, &b);
    int remainder= a%b;
    printf("%d", remainder);
    return 0;
}