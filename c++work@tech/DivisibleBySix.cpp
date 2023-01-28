//
// Created by shawm on 08-09-2022.
//
#include <iostream>

using namespace std;

void divisibleBySix(int *n, int *a)
{
    string result[*n];
    for(int i = 0; i < *n; i++)
    {
        if(a[i] % 6 == 0)
        {
            result[i] = "true";
        }
        else
        {
            result[i] = "false";
        }
    }
    for(int i = 0; i< *n; i++)
    {
        cout<<result[i]<<" ";
    }
}
int main()
{
    int num;
    cout<<"Enter the number of test cases";
    cin>>num;
    int arr[num];
    for(int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    divisibleBySix(&num,arr);

}