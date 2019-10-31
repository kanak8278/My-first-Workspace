# include <bits/stdc++.h>
# include <iterator>
using namespace std;
int main()
{
    vector<long>number;
    int n;
    cin>>n;
    vector<long>::iterator itr = number.begin();
    for (int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        number.push_back(x);
    }
    int q;
    cin>>q;
    int querie[q];
    
    for (int j = 0; j < q; j++)
    {
        cin>>querie[j];
    }

    for (int j = 0; j < q; j++)
    {
        for(int i =0; i<n; ++i)
        {
            if(number[i] == querie[j])
            {
                cout<<i+1<<endl; // program is not returning the position but the number itself.
                break;
            }
            else
            {
                vector<int>::iterator low;
                cout<<*lower_bound(number.begin(),number.end(), querie[j])<<endl; 
                break;

            }
            
        }
    }
    

    return 0;
}
