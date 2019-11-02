# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num_sides[n];

    for (int i = 0; i < n; i++)
    {
        int counter=0;
        cin>>num_sides[i];
        long all_sides=0;
        int sum[num_sides[i]];
        int length[num_sides[i]];
        for (int j = 0; j < num_sides[i]; j++)
        {
            cin>>length[j];
            all_sides = all_sides+length[j];
        }

        // cout<<"Sum of all sides: "<<all_sides<<endl;


        for (int l = 0; l < num_sides[i]; l++)
        {
            // cout<<"Enter in the loop: "<<i<<"."<<l<<endl;

            if(all_sides/2.0 > float(length[l]))
            {
                
                counter++;
                // cout<<"Counter: "<<counter<<endl;
            }
            else
            {
                // cout<<"Inside Else statement"<<endl;
                break;
            }
            
        }

        if(counter==num_sides[i])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        

        
    }
    
}