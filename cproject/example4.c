#include <stdio.h>
float multiplytwonumbers (int x, int y)
{
    int result = x * y ;
    printf ("The product of %d multiplied by %d is: %d\n", x, y, result);
}
int main (void)
{
    multiplytwonumbers (10, 20);
    multiplytwonumbers (20, 30);
    multiplytwonumbers (40, 50);
    return 0;
}