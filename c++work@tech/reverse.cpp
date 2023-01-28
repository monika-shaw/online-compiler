//
// Created by shawm on 10-09-2022.
//
#include <iostream>

using namespace std;

int  *reverse(int *n, int *a)
{
    int temp;
    for(int i = 0; i < *n/2; i++)
    {
        temp = a[i];
        a[i] = a[*n-1-i];
        a[*n-1-i] = temp;
    }
    return a;
}
int main()
{
    int num;
    cout<<"Enter the size of array"<<endl;
    cin>>num;
    int arr[num];
    for(int i = 0; i< num; i++)
    {
        cin>>arr[i];
    }
    int *p;
    p = reverse(&num, arr);
    for(int i = 0; i < num; i++)
    {
        cout<<p[i]<<" ";
    }
}
