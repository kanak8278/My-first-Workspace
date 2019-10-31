// sum of values


# include<stdio.h>
int main()
{ 
    int l;
    int k;
    int n;
    scanf("%d", &n); 
    int array[n];
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
    }
    


    scanf("%d", &l);
    scanf("%d", &k);
    for(int i=1; i< n; ++i)
    {
        array[i] = i;
        sum[i]= sum[i-1] + array[i];

    }
    printf("%d", sum[k]);
    printf("%d", sum[l]);
    // issue here 
    int reqsum = sum[k] - sum[l-1];
    printf("%d", reqsum);
}