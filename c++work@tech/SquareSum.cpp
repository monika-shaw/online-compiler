//
// Created by shawm on 08-09-2022.
//
#include <iostream>

using namespace std;

void printDigits(int *array, int *p)
{
    for(int i = 0; i < *p; i++)
    {
        int num,sum = 0;
        num = array[i];

        int rem = 0;
        while(num!= 0)
        {
            rem = num%10;
            num = num/10;
//            cout<<rem<<" ";
            sum = (rem*rem)+sum;

        }
        cout<<sum;
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