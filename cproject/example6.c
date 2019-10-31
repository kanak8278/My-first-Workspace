#include <stdio.h>
main()
{
float x;
scanf("%f\n", &x);
float y= square(x);
printf("%f\n");
return 0;
}
float quare( float x)
{
    float y;
    y = x*x;
    return (y);
}

