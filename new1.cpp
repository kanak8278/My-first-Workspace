# include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int t;
    cin>>t;

    int num_car[t];
    for (int i = 0; i < t; i++)
    {   m=0;
        cin>>num_car[i];
        int speed[num_car[i]];
        for (int k = 0; k < num_car[i]; k++)
        {
            cin>>speed[k];
        }
        // for (int k = 0; k < num_car[i]; k++)
        // {
        //     cout<<speed[k];

        // }
        
        for (int j = 0; j < num_car[i]; j++)
        {   cout<<"\t"<<m<<endl;
            if(speed[j]>=speed[j-1])
            {
                cout<<"I am in if  "<<j<<"\t"<<speed[j]<<"\t"<<speed[j-1]<<endl;
                ++m;
            }
        }
        cout<<m<<endl;    


    }
    
    
    
    
}