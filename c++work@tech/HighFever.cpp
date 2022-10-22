//
// Created by shawm on 22-10-2022.
//
//
// Created by shawm on 22-10-2022.
//
#include <iostream>

using namespace std;

int main()
{
    int t, sign = 0;
    cin>>t;
    string name;
    double temp;
    for(int i = 0; i < t; i ++)
    {
       cin>>name>>temp;
       if(temp > 98.6) {
           cout << name;
           if(sign < t-1)
           {
               cout<<", ";
               sign++;
           }
       }
       else
           continue;
    }
}