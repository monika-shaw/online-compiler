//
// Created by shawm on 10-09-2022.
#include <iostream>

using namespace std;

void star(int num)
{
    for(int i = 0; i<num; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    star(n);
}