#include <stdio.h>
int main()
{
    int hr;
    int total1= 0;
    int total2= 0;
	int total=0;
    float netincome1= 0.0;
	float netincome2=0.0;
	float netincome3=0.0;

    printf("Enter the hours you work in a week:  ");
    scanf("%d", &hr);
    if(hr>40 )
	{
        total=((hr-40)*18 + 40*12);
        printf("total1: %d\n", total1);
    }
    else
    {
        total= hr*12;
        printf("total2: %d\n", total2);
    }
	if(total<=300)
	{
		printf("%f\n", total*0.85);
	} else if (total>300 && total<450 ) 
	{	
		printf("%f\n", (total-300)*0.80+ 300*0.85);
	}else 
	{	
		printf("%f", (total-450)*0.75 + (150*0.80) + (300*0.85));
	}

	char a = 'a';
	switch(a) {
		case 'a': {
			printf("1st alphabet");
			break;
		}
		case 'b': {
			printf("2nd alphabet ");
			break;
		}
		default: {
			printf("other alphabets");
		}

	}
	printf("\n");
    return 0;
}