//
// Created by shawm on 09-09-2022.
//
#include <iostream>

using namespace std;

void printCharacter(string str)
{
    for(int i = 0 ; i<str.length(); i =  i+2)
    {
        cout<<str[i]<<str[i+1]<<endl;
    }
}
int main()
{
    string str = "WORKATTECH";
    printCharacter(str);
}