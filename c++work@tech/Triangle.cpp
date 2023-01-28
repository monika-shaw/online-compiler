//
// Created by shawm on 08-09-2022.
//
#include <iostream>

using namespace std;

void divisibleBySix(int *n)
{
    int arr[*n];
    int a= -1;
    for(int i = 0; i< *n; i++) {
        int circumferenece = 0;
       for(int j = 0; j <3; j++)
       {
           cin>>arr[j];
       }


       if(arr[0]+arr[1] >= arr[2] && arr[0]+arr[2] >=arr[1] && arr[1]+arr[2] >=arr[0])
       {
           circumferenece = arr[0]+arr[1]+arr[2];
           cout<<circumferenece<<endl;
       }
       else
           cout<<a<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter the number of test cases";
    cin>>num;
    divisibleBySix(&num);

}