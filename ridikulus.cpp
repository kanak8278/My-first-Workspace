# include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>v;
    int x;
    vector<int> :: iterator ptr = v.begin();
    int test_cases;
    cin>>test_cases;
    int num_str[test_cases];
    
    for (int i = 0; i < test_cases; i++)
    {
        cin>>num_str[i];
    }

    for (int i = 0; i < test_cases; i++)
    {
        while(num_str[i]!=0)
        {
            x = num_str[i]%10;
            v.push_back(x);
            num_str[i]= num_str[i]/10;
        }
        sort(v.begin(), v.end());
        for (ptr = v.begin(); ptr!= v.end()-1; ptr++)
        {
            if(v[i]==v[i+1]-1)
            {
                continue;
            }
            else
            {
                cout<<"NO";
                break;
            }
            
        }
           

    }

    

    
    


    

}