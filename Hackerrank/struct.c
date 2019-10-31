# include<stdio.h>
struct worker
{
    short id;
    int age;
    double wage;
};
int main()
{
    struct worker joe ={14, 32, 24.15};
    printf("%d\t %d\t %f\n", joe.id, joe.age, joe.wage);
    
    
}