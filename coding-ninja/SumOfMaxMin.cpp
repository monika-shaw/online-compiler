//
// Created by shawm on 28-01-2023.
//
#include <iostream>
#include <algorithm>

using namespace std;

int sumOfMaxMin(int arr[], int n){
    // Write your code here.
    sort(arr, arr + n);
    return  arr[0]+arr[n-1];
}

int main()
{
    int n;
    cout << "Enter size";
    cin>>n;
    int arr[n];
    cout << "Enter elements";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = sumOfMaxMin(arr,n);
    cout << result;
}