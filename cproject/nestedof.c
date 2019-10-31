#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int i=1;
    int guess=0;
    time_t t;
    srand((unsigned) time(&t));
    int randomnumber=(rand()%20)+1;
    printf("%d\n\n", randomnumber);

   printf("We are going to play a guessing game,\n I will randomly input any  number from 1 to 20 and\n you have to guess the no in 5 rounds.\n\n");
   for(i=1 ; i<=5; ++i)
   {
    printf("Guess your number: ");
    scanf("%d", &guess);
    if (guess>randomnumber)
    {
        printf("Your number %d is larger than the required number.\n", guess );
        printf("You have %d no. of turns left\n\n", 5-i);
    }
    else 
    {
        if( guess < randomnumber)
        {
            printf("Your number %d is smaller than the required number.\n", guess);
            printf("You have %d no. of turns left\n\n", 5-i);
        }
        else
        {
            printf("Congrats!, You guessed correct.\n");
            printf("You won with %d trials left\n\n", 5-i);
           break;

        }
        


    }
    
}



    return 0;
}
