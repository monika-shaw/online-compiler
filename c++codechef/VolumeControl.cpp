//
// Created by shawm on 04-09-2022.
//
#include <iostream>

using namespace std;

int *volume(int input)
{

    static int result[2];
    for(int i = 0; i<input; i++)
    {
        int arr[2];
        for(int j = 0; j < 2; j++)
        {
            cin>>arr[j];
        }
        if(arr[0]>arr[1])
            result[i] = arr[0]-arr[1];
        else
            result[i] = arr[1]-arr[0];
    }

    return result;
}

int main()
{
    int n ;
    cin>>n;
    int *p;

    p = volume(n);
    for(int i = 0; i < n ;i++)
    {
        cout<<p[i]<<endl;
    }

}