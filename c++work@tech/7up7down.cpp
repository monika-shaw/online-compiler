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
        if(a[i] > 7)
        {
            result[i] = "UP";
        }
        else if(a[i] < 7)
        {
            result[i] = "DOWN";
        }
        else
            result[i] = "EQUAL";
    }
    for(int i = 0; i< *n; i++)
    {
        cout<<result[i]<<endl;
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