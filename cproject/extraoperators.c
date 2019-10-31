#include <stdio.h>
int main()
{
int c;
int d;
int f;
printf("enter c:\n" );
scanf("%d", &c);
printf("enter d:\n");
scanf("%d", &d);
printf("enter f:\n");
scanf("%d", &f);
printf("%d\n", c+=d);
printf("%d\n", c);
printf("%d\n", f*=c);
printf("%d\n", f);
printf("%d\n",d%=c);
printf("%d\n", d);

    return 0;
}