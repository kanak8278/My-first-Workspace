#include<stdio.h>
int main()
{
    int remainder;
    for ( i = 4; i < 101; i++)
    {
        int squareroot= sqrt(i);

        for (int j = 1; j =< squareroot; j++)
        {
            remainder= i%j;
            if (remainder==0)
            {
                break;
            }
            

        }
        
    }
    
}