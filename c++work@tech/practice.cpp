//
// Created by shawm on 08-09-2022.
//
#include <iostream>

using namespace std;

int main()
{
//    int n = 1234;
//    int rev = 0, a = 0;
//
//    while(n  != 0) {
//       a = n%10;
//       rev = rev*10+a;
//       n = n/10;
//    }
//
//    int rem = 0,num;
//    num = rev;
////    cout<<num;
//    while(num!= 0)
//    {
//        rem = num%10;
//        num = num/10;
//        cout<<rem<<endl;
//    }

string h = "hello";
string *p;
p = &h;
    for (int i = 0; i < p->length(); ++i) {
        cout<<p[0]<<endl;
    }








}