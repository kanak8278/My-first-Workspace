# include <stdio.h>
int main()
{
int t;
int y2 =0;
int x2;
int  x1;
int y1;
int a = x2;
float b;
float radius = b;
scanf("%d", &t);


int i=1;
while (i<= t)
{

scanf("%d", &x2);
scanf("%d", &x1);
scanf("%d", &y1);
radius = ( ((float)x2-x1)*((float)x2-x1) + (float)y1*y1)/ (2*y1);
int cost = (int)radius;
//printf("%f", radius);
if( cost < radius)
printf("%d\n", cost+1);
else
{
    printf("%d\n", cost);
}

 ++i;
}
}