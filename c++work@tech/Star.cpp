//
// Created by shawm on 10-09-2022.
//
#include <iostream>

using namespace std;

void star()
{
    for(int i = 0; i<5; i++)
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
    star();
}