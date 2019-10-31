#include <stdio.h>
int main()
{
    float size1;
    float size2;
    float size3;
    float size4;
    float size5;

    size1= sizeof (double);
    size2= sizeof (int);
    size3= sizeof (double long);
    size4= sizeof (long);
    size5= sizeof (long int);
    printf("%f\n", size1);
    printf("%f\n", size2);
    printf("%f\n", size3);
    printf("%f\n", size4);
    printf("%f\n", size5);

    printf("the size of char %lu\n", sizeof (char));
    return 0;
}
