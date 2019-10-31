#include <stdio.h>
int main()
{
     int a=0,b=0,c=0;
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0|| b!=0 || c!=0)
    {
        if( b-a == c-b)
        {
            int cd= b-a;
            int nextTerm= c+cd; 
            printf("AP %d\n", nextTerm);
        }
        else if(b/a==c/b)
        {
            int cd = b/a;
            int nextTerm= c*cd;
            printf("GP %d\n", nextTerm);
 
        }
        scanf("%d%d%d", &a,&b,&c);
 
    }
    return 0;
 
}