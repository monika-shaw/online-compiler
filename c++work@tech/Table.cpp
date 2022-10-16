//
// Created by shawm on 10-09-2022.
//
#include <iostream>

using namespace std;

void table(int *n, int *a)
{
    int temp,res;
    for(int i = 0; i < *n; i++)
    {
        temp = a[i];
        for(int i = 1 ;i <11; i++)
        {
            res = temp*i;
            cout<<res<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int num;
    cout<<"Enter number of inputs"<<endl;
    cin>>num;
    int arr[num];
    for(int i = 0; i< num; i++)
    {
        cin>>arr[i];
    }
    table(&num,arr);

}