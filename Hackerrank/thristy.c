//worked on it thought true but get false on 5th test case

# include <stdio.h>
int main()
{
    int n;
    float x;
    float y;
    scanf("%d", &n);
    scanf("%f", &x);
    scanf("%f", &y);
    // two types available: 1ltr, 3ltr respectively of x, y price
    float cost_ltr1= x;
    float cost_ltr2= (float)y/3;
    if (cost_ltr1<=cost_ltr2)
    {
        int min_cost= n*x;
        printf ("%d\n", min_cost);
    }
    else if(cost_ltr1>cost_ltr2)
    {
        int quotient = n/3;
        int remain_ltr = n - quotient*3;
        int min_cost = y*quotient + remain_ltr*x;
        printf ("%d\n", min_cost);
    }
    return 0;

}