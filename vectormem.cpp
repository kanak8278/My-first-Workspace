#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>numbers(3);
    int capacity = numbers.capacity();
    int size = numbers.size();
    cout<<capacity<<"\t"<<size<<endl;
    for (int i = 0; i < 1000; i++)
    {
        if(numbers.capacity()!= capacity)
        {
            capacity = numbers.capacity();
            cout<<"Capacaity: "<<numbers.capacity()<<endl;
        }
        numbers.push_back(i);

    }
    
    


}