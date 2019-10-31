#include<stdio.h>

    int hcf(int a, int b)
    {
        int remainder=1;
        if (a==b)
        {
            return a;
        }
        else
        {
            while (b>0)
            {
                remainder=a%b;
                a=b;
                b=remainder;
                
            }
            printf("%d\n", a);
            return a;


        }
        

    }
    int main()
    {
        int a=16, b=52;
        printf("GCD of %d and %d is %d \n", a, b, hcf(a, b)); 
        return 0;

    }
