


////Unknown Problem 



# include<bits/stdc++.h>
using namespace std;

int main()
{
    string name="hackerearth";
    string input;
    cin>>input;
    int sizeS1 = input.length();
    int sizeS2 = name.length();
    cout<<input<<endl;
    cout<<name.length()<<endl;
    cout<<input.length()<<endl;

    string::iterator it = input.begin();

   int number[sizeS2];
    
    for (int i = 0; i < sizeS2+1; i++)
    {
        int l=0;
        for (int j = 0; i < sizeS1+1; j++)
        {
            if(name.at(i)==input.at(j))
            {
                ++l;

            }
            number[i]=l;
        }
        
    }*/
        
    
}