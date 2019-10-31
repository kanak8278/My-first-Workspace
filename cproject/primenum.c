    #include<stdio.h>
    int main()
    {
        int number;
        int remainder;

        printf("Enter your number: ");
        scanf("%d", &number);
        if( number==1 )
        printf("1 is neither composite nor prime.");
        else
        {

        for (int i=2; number > i*i; ++i)
        {
            remainder=number%i;
            if (remainder==0)
            {
                printf("Its not prime");
                break;
            }
        // printf("%d\n", remainder);
        }
        if (remainder!=0)
        printf("It is prime.");
        }
        
        return 0;

    }