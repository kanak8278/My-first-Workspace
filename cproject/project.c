#include <stdio.h>
int main()
{
    printf("Hello World \n");
    printf("There are several options for breakfast, provide your choice by entering the value correspoing to your choices as given below:\n");
    printf(" 1. Sandwich\n 2. Omlet \n 3.Poha\n 4.Milk and Fruits\n 5.Toast and Milk\n");
    int Sandwich=1;
    int Omlet=2;
    int Poha=3;
    int Milk_and_Fruits=4;
    int Toast_and_Milk=5;
    int choice;
    printf("Please enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("Sandwich is being prepared.\n");
        break;

        case 2:
        printf("Your omlet is being prepared.\n");
        break;
    
        case 3:
        printf("Your hot and fresh Poha is almost ready.\n");
        break;

        case 4:
        printf("Your hot Milk and fresh fruits are just on table in a while\n");
        break;

        case 5:
        printf("Your hot Milk and toast are just on table in a while");
        break;
        
        default :
        printf("Your selected choice is not available now\n");
        break;
        

    }
    return 0;
}