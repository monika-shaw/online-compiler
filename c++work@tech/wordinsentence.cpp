//
// Created by shawm on 22-09-2022.
//
#include <iostream>

using namespace std;
int main()
{
   char str[40];
   cout<<"Enter string";
    gets(str);
    int count = 1;
    for(int i = 0; str[i] != '\0';i++) {
        if(str[i] == ' ') {
//            cout << str[i] << endl;
count++;
        }
    }
  cout<<"you typed : "<<count<<" words";
}