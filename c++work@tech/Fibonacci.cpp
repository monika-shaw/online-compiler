//
// Created by shawm on 18-10-2022.
//
#include <iostream>
using namespace std;

int main()
{
    int n, n1 = 0, n2 = 1, n3,test;
    cout<<"Enter test case"<<endl;
    cin>>test;
    for(int j = 1; j <= test; j++) {
        cin >> n;
        if (n == 1) {
            cout << n1 << " "<<endl;
        } else if (n == 2) {
            cout << n1 << " " << n2 << " "<<endl;
        } else {
            cout << n1 << " " << n2 << " ";
            for (int i = 2; i < n; i++) {
                n3 = n1 + n2;
                cout << n3 << " ";
                n1 = n2;
                n2 = n3;
            }
            cout<<endl;
        }
    }

}