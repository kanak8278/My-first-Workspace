#include<stdio.h>
int main(int argc, char const *argv[])
{
    enum Day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    enum Day day;
    for(enum Day day= monday; day<= sunday; ++day )
    {
        for (day= wednesday; day<= sunday; ++day)
        

        printf("Its not wednesday\n");
    }

    return 0;
}
