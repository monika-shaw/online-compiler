//
// Created by shawm on 12-09-202
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;

   vector<int> vect;

        for (int i = 0 ;i < n; i++) {
            if (a[i] > 0) {
                vect.push_back(a[i]);
            }


        }


    for (int i = 0; i < count; ++i) {
        cout<<vect[i]<<" ";
    }
}