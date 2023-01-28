//
// Created by shawm on 04-10-2022.
//
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float sub,sum = 0,per;
    for(int i = 0; i < n; i++)
    {
        cin>>sub;
        sum = sum+sub;
    }
     per = sum*100/(n*80);
    return 0;
}