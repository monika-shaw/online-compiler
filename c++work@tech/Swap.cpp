//
// Created by shawm on 19-10-2022.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size;
    for(int i = 0; i < n; i++)
    {

        cin>>size;
        int  arr[size],temp;
        for(int j = 0; j <size; j++)
        {
            cin>>arr[j];
        }

        for(int j = 0; j < size-1; j=j+2)
        {
            swap(arr[j],arr[j+1]);
        }

        for(int j = 0; j <size; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;


    }
}