#include <stdio.h>
int main()

{
char ch ;
printf ( "\nEnter any alphabet " ) ;
scanf ( "%c", &ch ) ;
if ( ch >= 65 && ch <= 90 )
return ( ch ) ;
else
return ( ch + 32 ) ;
}