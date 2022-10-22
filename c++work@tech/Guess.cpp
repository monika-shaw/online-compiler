//
// Created by shawm on 20-10-2022.
//
#include <iostream>

using namespace std;

int main()
{
    int n,guess;
    cin>>n;
    a:
    cin>>guess;
    if(n == guess) {
        cout << "Correct Guess" << endl;
        return 0;
    }
    else {
        cout << "Incorrect Guess" << endl;
        goto a;
        }

}

