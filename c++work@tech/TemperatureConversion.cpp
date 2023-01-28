//
// Created by shawm on 08-09-2022.
//
#include <iostream>
#include <cmath>
using namespace std;

void temperatureConversion(int *n, double *array)
{
    float result[*n];
    for(int i = 0; i < *n; i++)
    {
        result[i] = ((array[i]*9/5)+32);

    }
    for(int i = 0; i < *n; i++)
    {
        printf("%0.2lf\n",result[i]);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of test cases";
    cin>>n;
    double arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }


    temperatureConversion(&n,arr);

}