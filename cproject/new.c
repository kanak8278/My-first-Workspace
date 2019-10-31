#include <stdio.h>
int main()
{
enum companies {google, xerox, yahoo, microsoft};
enum companies Mycompany1;
enum companies Mycompany2;
Mycompany1= google;
scanf("%u", &Mycompany2);
printf("%d", Mycompany1);
printf("%d", Mycompany1+Mycompany2);
    return 0;
}