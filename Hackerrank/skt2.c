# include<stdio.h>
int main()
{
    unsigned int modulo_with = 1000000007;
    unsigned int q;
    unsigned int N;
    unsigned int T;
     // no.of queries
    scanf("%u", &q);
    
    int n =1;
    while (n<=q)
    {
    
   
    scanf("%u", &N);
    scanf("%u", &T);
    unsigned long long sum = 0;
    for(int i =1; i<= N; ++i)
    {
        unsigned long long product = 1;
        for(int k=1; k<= T; ++k)
        {
            product = (i%modulo_with+k%modulo_with)%modulo_with * product;
           // printf("Im here bro");
            //printf("%llu\n", product);

        }
        sum = (sum + product)%modulo_with;
        //printf("I am at sum initial");
        //printf("%llu\n\n", sum);
    }
    //printf("I am at fianl sum");
    printf("%llu\n", sum);
    ++n;
}

}    