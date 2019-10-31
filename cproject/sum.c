#include <stdio.h>
int main()
{
    int count;
    int i;
    int sum=0;
    int totalsum;
    printf("Enter the no. upto sum you want: ");
    scanf("%d", &count);

    for(i=1; i<=count; i=i+1 )
    {
        sum=sum+2;
        printf("%d\n", sum);
        
    }
    if(i%2=0)
    {
        sum=sum+i;
        printf("%d",sum);
    }
    return 0;



}