//
// Created by shawm on 17-10-2022.
//
#include <iostream>

using namespace std;

int main()
{
    double t,hra,da,bonus;
    double salary, res;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    cin>>hra>>da>>bonus;
    for(int i = 0 ;i < t; i++) {
        cin>>salary;
        res = (salary) + ((salary * hra) / 100) + ((salary * da) / 100) + ((salary * bonus) / 100);
        printf("%0.2lf",res);
    }
}