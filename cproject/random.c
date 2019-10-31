#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int i =1;
    float guess;
    int count =6;
    srand(time(0));
    //printf("%ld\n", time(0));
    // printf("%d\n", rand());
    int randomnumber=rand()%20;
    printf("%d\n", randomnumber);

    printf("We are playing a guessing game where the number lies betweeen 0 to 20.\n You have to guessthe correct number.\n\n");

   

        for ( i; i < count; i++)
        {
            printf("Guess the random number:  \n");
            scanf("%f", &guess);
           
                if(guess < randomnumber)
                {
                    if(i<5)
                    printf("You are wrong, you have to guess a larger number. \n");
            
                }
                else
                {
                    if( guess > randomnumber)
                    {
                        printf("You have guessed greater number.\n");
                    } else
                    { 
                        printf("Your guess is correct.\n");
                        break;
                    }
                }
            
            
            
            
        
            
        }
        if(i==6)
        {
            printf("Your trials are exhausted.\n Correct number is %d.\n",randomnumber);
        }

   return 0;
}