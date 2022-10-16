//
// Created by shawm on 26-09-2022.
//
#include <iostream>
using namespace std;

void pastries(int n, int *a, int p)
{
    for(int i = 0; i < n; i++)
    {
        if(p>0) {
            p = p - a[i];
            cout<<"Enjoy your dessert!"<<endl;
        }
        else{
            cout<<"Sorry, we are all out!"<<endl;
        }

    }
}
int main()
{
    int noOfPastries, noOfcustomers;
    cin>>noOfPastries>>noOfcustomers;
    int arr[noOfcustomers];
    for(int i = 0; i < noOfcustomers; i++)
    {
        cin>>arr[i];
    }

    pastries(noOfcustomers, arr, noOfPastries);





}