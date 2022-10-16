//
// Created by shawm on 10-09-2022.
//
#include <iostream>
using namespace std;

void palindrome(int *n, string *arr)
{
    string temp,compare;
    for(int i = 0; i<*n; i++)
    {
        compare = arr[i];
        temp = arr[i];
        string t;
        int l  =temp.length();
        for(int j = 0; j <l/2;j++)
        {
            t[j] = temp[j];
            temp[j] = temp[l-1-j];
            temp[l-1-j] = t[j];
        }
//        cout<<compare<<endl;
//        cout<<temp<<endl;
        if(compare == temp)
        {
            cout<<"True"<<endl;
        }
        else
            cout<<"False"<<endl;
    }

}
int main()
{
    int num;
    cin>>num;
    string str[num];
    for(int i = 0; i<num; i++)
    {
        cin>>str[i];
    }

    palindrome(&num,str);
//    for(int i =0 ; i< num; i++)
//    {
//        cout<<str[i]<<" ";
//    }
}