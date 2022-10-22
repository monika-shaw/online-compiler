//
// Created by shawm on 19-10-2022.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        int size;
        cin>>size;
        int  arr[size],val;
        for(int j = 0; j <size; j++)
        {
            cin>>arr[j];
        }

        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1]) {
                val = EXIT_FAILURE;
                break;
            }
            else
               val = EXIT_SUCCESS;
        }
        if(val == 0)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;

    }
}