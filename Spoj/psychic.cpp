# include<bits/stdc++.h>
using namespace std;
//Little Jhool and psychic powers
// why result is acting as a pointer type.
int result(string number)
{
    int j=0;
    for(int i=0; i<number.length(); ++i)
    {
        if(i==0)
        {
            ++j;
            continue;
        }
        if(number[i]==number[i-1])
        {
            ++j;
            if(j==6)
            {
                return 1;
            }
        }
        else
        {
            j=1;
        }
        
    }
    if(j!=6)
    {
        return 0;
    }


    
}

int main()
{
    string your_number; 
    cin>>your_number;
    cout<<result(your_number)<<endl;
    if(result==1)
    {
        cout<<"Good luck!";
    }
    else
    {
        cout<<"Sorry Sorry!";
    }
    

    return 0;

}