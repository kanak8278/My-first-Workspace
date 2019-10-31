#include<stdio.h>
int main()
{
    long long testcase;
    long long thirdTerm;
    long long thirdLastTerm;
    long long totalSum;
    long long firstTerm;
    long long commonDiff;
    long long totalTerms;
    long long  x;
    long long terms;
    scanf("%lld",&testcase);

    while (testcase>0)
    {
        scanf("%lld", &thirdTerm);
    scanf("%lld", &thirdLastTerm);
    scanf("%lld", &totalSum);
    x= totalSum/(thirdTerm+thirdLastTerm);
    if (totalSum > x*(thirdTerm+thirdLastTerm))
    {
        totalTerms= 2*x+1;
        printf("%lld\n", totalTerms);
    }
    else {
        totalTerms = 2*x;
        printf("%lld\n", totalTerms);
    }
    commonDiff= (thirdLastTerm-thirdTerm)/(totalTerms-5);
    firstTerm= thirdTerm - 2*commonDiff;
    for(int i=0; i< totalTerms; ++i)
    {
        terms= firstTerm+i*commonDiff;
        printf("%lld ", terms);
    }
    testcase--;
    }
    
   
    
 
    
}