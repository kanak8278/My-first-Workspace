# include<stdio.h>
int main()
{
    int m=0;
    int i;
    scanf("%d", &i);
    int numbers[i];
    int p;
    int k;
    scanf("%d", &p);
    scanf("%d", &k);
    int x =0;
    while (x<i)
    {
        
        scanf("%d", &numbers[x]);
        
        x++;
    }
    
    for (int l=0; (l+1)<i; ++l)
    {
        
        for(int a=l+1; a<i; ++a)
        {
            
            if ((numbers[l]+numbers[a]) % p == k)
            {
        
                m++;
            }
            
        }
    }
    printf("%d\n", m);
    
    

}