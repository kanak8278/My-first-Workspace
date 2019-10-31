# include "stdio.h"
# include "string.h"

int main()
{
	char dest[20]= "This is ";
	char sour[]= "an example.";
	printf("%s\n",dest);
	printf("%s\n", sour);
	strcat(dest, sour);
	
	printf("%s\n", dest);
	return 0;
}
 