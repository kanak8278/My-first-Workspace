//# include <stdio.h>
//# include<string.h>
//# include<ctype.h>
//int main()
//{
   //char mystring1[20];
   //char mystring2[20];
  // scanf("%s", mystring1);
   //printf("%s\n\n", mystring1);
   //scanf("%s", mystring2);
   //printf("%s\n\n", mystring2);
   //strncpy(mystring1, mystring2, 10);
   //printf("%s", mystring1);
   //strncat(mystring1,mystring2,20);
  // printf("%s", mystring1);*/
   //for (int i = 0;(mystring1[i]=(char)toupper(mystring1[i])!='\0'); i++)
   //{
   //    printf("%d", (char)mystring1[i]);
  // }
   //printf("%d",strncmp(mystring1, mystring2,20));
  // printf("%d",atoi(mystring1));
   // C program to demonstrate use of * for pointers in C 
/*#include <stdio.h> 
  
int main() 
{ 
    // A normal integer variable 
    int Var = 10; 
  
    // A pointer variable that holds address of var. 
    int *ptr = &Var; 
  
    // This line prints value at address stored in ptr. 
    // Value stored is value of variable "var" 
    printf("Value of Var = %d\n", *ptr); 
  
    // The output of this line may be different in different 
    // runs even on same machine. 
    printf("Address of Var = %p\n", ptr); 
  
    // We can also use ptr as lvalue (Left hand 
    // side of assignment) 
    *ptr = 20; // Value at address is now 20 
  
    // This prints 20 
    printf("After doing *ptr = 20, *ptr is %d\n", *ptr); 
  
    return 0; 
}*/ 
// C++ program to illustrate Pointer Arithmetic 
// in C/C++ 
#include<stdio.h>
//#include <stdc++.h> 
  
// Driver program 
int main() 
{ 
    // Declare an array 
    int v[3] = {10, 100, 200}; 
  
    // Declare pointer variable 
    int *ptr; 
  
    // Assign the address of v[0] to ptr 
    ptr = v; 
  
    for (int i = 0; i < 4; i++) 
    { 
        printf("Value of *ptr = %d\n", *ptr); 
        printf("Value of ptr = %p\n\n", ptr); 
  
        // Increment pointer ptr by 1 
        ptr++; 
    } 
} 
