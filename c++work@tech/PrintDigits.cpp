//
// Created by shawm on 08-09-2022.
//
#include <iostream>

using namespace std;

void printDigits(int *array, int *p)
{
    int  a = 0;
    for(int i = 0; i < *p; i++)
    {
        int n = 0,rev = 0;
        n = array[i];
        while(n  != 0) {
            a = n%10;
            rev = rev*10+a;
            n = n/10;
        }
        int num;
        num = rev;
        int rem = 0;
        while(num!= 0)
        {
            rem = num%10;
            num = num/10;
            cout<<rem<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int n;
    cout<<"enter the no of test cases\n";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    printDigits(arr,&n);

}