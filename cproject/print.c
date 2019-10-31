#include<stdio.h>
int main()
{
    char name[5];
    printf("|___|___|___|\n|___|___|___|\n|___|___|___|\n\n\n");
    printf("Enter your name:");
    scanf("%s", name);
    printf("Hello %s", name);

    return 0;
}