#include <stdio.h>

int main()
{
    int count;
    printf("Enter how many numbers you want: ");
    scanf("%d", &count);
    int number=-2;



    for(int i=1; i<=count; ++i)
    {
        printf("Im here");
        number=number+2;
        printf("  %d  ", number);
    }

    return 0;
}