//
// Created by shawm on 26-09-2022.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num,a = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>num;
        int sum = 0;
        while(num !=0) {
            a = num % 10;
            sum = sum + a;
            num = num / 10;
        }
        cout<<sum<<endl;
    }
}