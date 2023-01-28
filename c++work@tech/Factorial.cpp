#include <iostream>
using namespace std;

// Function to find factorial
// of given number
int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

// Driver code
int main()
{
    int num,a;
    cout<<"Enter test cases";
    cin>>a;
    for(int i = 0; i < a; i++) {
        cin >> num;

             cout<< factorial(num) << endl;
    }
    return 0;
}