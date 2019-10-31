# include<bits/stdc++.h>
using namespace std;

// int win( int a[] )
// {
//    if( (a[0]==a[4]&&a[4]==a[8]&& a[0]==1)|| (a[0]==a[1] && a[0]==a[2] && a[0]==1) || (a[0]==a[3]&&a[0]==a[6]&&a[0]==1) || (a[1]==a[4]&& a[1]==a[7]&&a[1]==1) || ( a[2]==a[5]&&a[5]==a[8]&& a[5]==1) )
//     {
      
//         cout<<"1st player wins";

//     }
//     if( (a[0]==a[4]&&a[4]==a[8]&& a[0]==0)|| (a[0]==a[1] && a[0]==a[2] && a[0]==0) || (a[0]==a[3]&&a[0]==a[6]&&a[0]==0) || (a[1]==a[4]&& a[1]==a[7]&&a[1]==0) || ( a[2]==a[5]&&a[5]==a[8]&& a[5]==0) )
//     {
             
//         cout<<"2nd player wins";

//     }
//     else
//     {
//         continue;
//     }
    
// }
int main()
{
    int a[9];
    
    for (int i = 0; i < 9; i++)
    {
        a[i]=-1;
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     cout<<a[i];
    // }

    int trial;
    int count=1;
    for (int i = 0; count<9 ; i++)
    {
        cout<<"For loop satrts;"<<endl;
        if(count%2==1)
        {
            cin>>trial;
            cout<<"count is:\t"<<count<<endl;
            if(a[trial]==-1)
            {

                cin>>a[trial];
                //cout<<"0 is filled at position"<<trial<<endl;
                //cout<<"I am at count: "<<count<<endl;
                ++count;

            }
            else
            {
                cout<<"Already Filled"<<endl;
            }
        }
        if(count%2==0)
        {
            cin>>trial;
            cout<<"\t";
            if(a[trial]==-1)
            {
                cin>>a[trial];
                cout<<"0 is filled at position"<<trial<<endl;
                ++count;
            }
            else
            {
                cout<<"Already Filled"<<endl;
            }

        } 

        if( (a[0]==a[4]&&a[4]==a[8]&& a[0]==1)|| (a[0]==a[1] && a[0]==a[2] && a[0]==1) || (a[0]==a[3]&&a[0]==a[6]&&a[0]==1) || (a[1]==a[4]&& a[1]==a[7]&&a[1]==1) || ( a[2]==a[5]&&a[5]==a[8]&& a[5]==1) )
        {
            cout<<"1st player wins";
            break;
        }

        if( (a[0]==a[4]&&a[4]==a[8]&& a[0]==0)|| (a[0]==a[1] && a[0]==a[2] && a[0]==0) || (a[0]==a[3]&&a[0]==a[6]&&a[0]==0) || (a[1]==a[4]&& a[1]==a[7]&&a[1]==0) || ( a[2]==a[5]&&a[5]==a[8]&& a[5]==0) )
        {    
           cout<<"2nd player wins";
           break;

        }    
    
            

    }
    
   

}