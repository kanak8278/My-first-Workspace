# include<bits/stdc++.h>
using namespace std;

long sum_digits(int num)
{
    
    int digit[3];
    int i;
    for ( i = 0; num%10>=0; i++)
    {
        digit[i]= num %10; 
        num = num/10;
    }

    int sum =0;

    for (int k = 0; k < i; k++)
    {
        sum= sum + digit[i];
    }
    return sum;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    cout<<sum_digits(num);

}

