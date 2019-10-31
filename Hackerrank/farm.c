# include<stdio.h>
int main()
{
    int testcases;
    int home_x;
    int home_y;
    int entrance_x;
    float centre_x = entrance_x;
    float centre_y;
    int entrane_y = 0;
    int radius ;
    scanf("%d", &testcases);
    int i=1;
    while (i <= testcases)
    {
        scanf("%d", &entrance_x);
        scanf("%d", &home_x);
        scanf("%d", &home_y);
        
        centre_y = ((centre_x*centre_x) + (home_x*home_x) - (2*entrance_x*centre_x) + (home_y*home_y))/(2*home_y);
        printf("%f\t", ((centre_x*centre_x) + (home_x*home_x) - (2*entrance_x*centre_x) + (home_y*home_y)));
        printf("%d\t", 2*home_y);
        
        int radius = (int)centre_y;
        printf("%d\n", radius);
        
        ++i;

    }
    

}