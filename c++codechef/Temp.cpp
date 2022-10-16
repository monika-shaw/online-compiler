//
// Created by shawm on 04-09-2022.
//
#include <iostream>

using namespace std;


int *pass(int num)
{
    static int arr[3];
    for (int i = 0; i < num; ++i) {
        cin>>arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cout<<"Enter numbers";
    cin>>n;
    int *p;
    p = pass(n);
    for(int i = 0; i < n; ++i)
    {
        cout<<p[i];
    }

}