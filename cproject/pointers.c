# include<stdio.h>
#include <stdlib.h>

    /*int value=0;
    int *pvalue= &value;
    printf("%d\n", value);
    printf("%p\n", pvalue);
    printf("%p\n",&value);
    printf("%d\n", *pvalue);
    printf("%p\n\t", &pvalue);
    printf("%d\n\n", *pvalue+12);
    printf("%p\n",pvalue+12);
    printf("%d", *(pvalue+12));


    int marks[10];
    int *pmarks;
    pmarks = &marks;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", *pmarks);
        printf("%d", marks);
    }
    
    return 0;
    int i=5;
    float f=3.14;
    char w='k';
    void *pointer;


    pointer=&i;
    printf("%d\n", *(int*)pointer);
    printf("%p\n", pointer);
    printf("%p\n\n", &pointer);
    
    pointer=&f;
    printf("%0.2f\n", *(float*)pointer);
    printf("%p\n", pointer);
    printf("%p\n\n", &pointer);

    pointer= &w;
    printf("%c\n", *(char*)pointer);
    printf("%p\n", pointer);
    printf("%p\n\n", &pointer);

    return 0;
    int arraysum (int *array, const int n)
    {
        int sum=0;
        int *const arrayend= array+n;
        
        for(;array<arrayend; array++)
        sum += *array;

        return sum;
    }
    void main(void)
    {
       
        int values[10] ={1,1,1,1,1,1,1,1,1,1};
        printf("The sum of values= %d ", arraysum(values, 10));
        

    }
    void square(float *a)
    {
        float template;
        template= *a;
        *a= template*template;
    }
    int main()
    {
        float number= 2.2;
        square(&number);
        printf("%f",number);
    }*/
    int main()
    {
        int n;
        scanf("%d\n",&n );
        char *parray;
        parray= malloc(n,sizeof(char));
        scanf("%s", *parray);
        printf("%s", *parray);



    }



