#include <stdio.h> //there is error in printf why cant we use %in float.
int main()
{
int min;
float years;
float days;
float leftdays;
float leftmin;
float leftmonth;
 printf("Enter the value in minutes:\n");
 scanf("%d", &min);
 years= min/(24*60*365.0);
 days= min/(24*60.0);
 printf("The total no. of days: %f\n", days);
 printf("The converted value in years= %f\n", years);
 leftmin= min%(365*24*60);
 printf("Minutes left after completion of year: %f\n", leftmin);
 leftmonth= leftmin/(24*60*30);
 leftdays = (int)days%365;
 years= (int)years;
 printf("In %d minutes there is %d year and %d days", min, (int)years, (int)leftdays);



    return 0;
}