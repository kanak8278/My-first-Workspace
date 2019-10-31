# include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    int n;
    cin>>n;
    int key;

    long long array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        key= array[i];
        if(array[i]<array[i-1])
        {
            int j= i;
            while (array[j]<array[j-1] && j!=0)
            {
                count++;
                array[j]= array[j-1];
                array[j-1]=key;
                --j;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i];

    }
    cout<<"\n"<<count<<endl;
    
    

}