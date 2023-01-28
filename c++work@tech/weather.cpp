//
// Created by shawm on 22-10-2022.
//
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int temp, humidity;
    for(int i = 0; i < t; i ++)
    {
        cin>>temp>>humidity;
        if(temp >=30 && humidity >= 90)
            cout<<"Hot and Humid"<<endl;
        else if(temp >= 30 && humidity < 90)
            cout <<"Hot"<<endl;
        else if(temp < 30 &&  humidity >= 90)
            cout<<"Cool and Humid"<<endl;
        else if( temp  < 30 && humidity < 90)
            cout<<"Cool"<<endl;
    }
}