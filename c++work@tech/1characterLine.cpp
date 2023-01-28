//
// Created by shawm on 09-09-2022.
//
#include <iostream>

using namespace std;

void printCharacter(string str)
{
    for(int i = 0 ; i<str.length(); i++)
    {
        cout<<str[i]<<endl;
    }
}
int main()
{
    string str;
    cin>>str;
    printCharacter(str);
}