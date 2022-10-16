//
// Created by shawm on 06-09-2022.
//
#include <iostream>
using namespace std;

void fun(int arr[], int n)
{
    int temp;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(arr[i]<arr[j])
            {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
    cout<<(n-1);
    for( int k = 0; k<n; k++)
    {
        cout<<arr[k];
    }
}
int main()
{
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int arr[n];
    for(int i = 0; i< n;i++)
    {
        cin>>arr[i];
    }
    fun(arr,n);

}