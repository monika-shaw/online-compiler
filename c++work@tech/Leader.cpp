//
// Created by shawm on 12-09-2022.
//
#include <iostream>

using namespace std;

int printLeader(int size, int arr[])
{
    int static sum = 0;
    for (int i = 0; i < size; i++){
        int j;
        for (j = i + 1; j < size; j++){
            if (arr[i] <=arr[j])
                break;
        }
        if (j == size)
            sum = sum+arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int s = 0;
   s=  printLeader(n, arr);
   cout<<s;
}