#include <stdio.h>
int main()

{
    // It is program to store and print all prime numbers between 4 to 100. Hardcoring first two prime 2 & 3.
    int primenumber[100];
     primenumber[0]= 2;
     primenumber[1]= 3;


    for (int i = 4; i < 101; i++)
    {

            for ( int j = 0; j < i; j++)
            {
               float remainder= i% primenumber[j];
                if(remainder == 0)
                printf("The number %d is not a prime number", i);    
            }
            
        
        
    }

    return 0;
     
}