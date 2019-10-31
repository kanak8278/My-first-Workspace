# include<bits/stdc++.h>
using namespace std;

int main() {
    int num_test;
    cin>>num_test;

    int testcase[num_test];
    for (int i = 0; i < num_test; i++)
    {
        cin>>testcase[i];
    }

    int k=1;

    for (int i = 0; i < num_test; i++)
    {
        for (int k = 1; k <= 2*testcase[i]-1; k++)
        {
            for (int w = 1; w < testcase[i]-k; w++)
            {
                cout<<" ";
            }
            for (int s = 1; s <= k; s++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
    }
    

    return 0;
}
    

