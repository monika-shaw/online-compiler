//
// Created by shawm on 26-09-2022.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j <=arr[i];j++)
            if(j%3 != 0)
            {
                cout<<j<<" ";
            }
        cout<<endl;
    }


}