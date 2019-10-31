#include<stdio.h>
int main()

{
    int i=0;
    int numbers [10];
    // while ( i <= 9)
    // {
    //     printf("Enter the number\n");
    //     scanf("%d",&numbers[i] );
    //     if (numbers[i]==0)
    //     {
    //         i++;
    //         break;
    //     }
    //      i++;
        
    // }
    // for (int j = 0; j <i; j++)
    // {
    //     printf("The input %d was %d.\n", j+1, numbers[j] );
    // }
    int k;
    do {
        scanf("%d", &k);
        numbers[i] = k;
        i++;
    } while(k!=0 && i<10);

    for (int j = 0; j <i; j++)
    {
        printf("The input %d was %d.\n", j+1, numbers[j] );
    }
    
    
    



    return 0;
}