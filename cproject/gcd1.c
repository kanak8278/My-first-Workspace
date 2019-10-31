#include<stdio.h>
int main() {
int a, b;
printf("Enter 2 numbers:");
scanf("%d %d", & a, & b);
printf("Greatest Common Divisor is %d", gcd(a, b));
return 0;
}
