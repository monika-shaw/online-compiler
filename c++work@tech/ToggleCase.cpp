//
// Created by shawm on 19-10-2022.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of test cases"<<endl;
    cin>>n;
    char str[20],c;
    for(int i = 0; i < n; i ++)
    {
        cin>>str;
        for(int j = 0; str[j] != '\0'; j++)
        {
                if(str[j]>='A' && str[j]<='Z')
                    c=str[j]+32;
                else if(str[j]>='a' && str[j]<='z')
                    c=str[j]-32;

                cout<<c;

            }
        cout<<endl;
        }

    }
