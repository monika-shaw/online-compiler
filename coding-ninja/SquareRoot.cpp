//
// Created by shawm on 27-01-2023.
//
#include <iostream>
#include <math.h>

using namespace std;

int sqrtN(long long int N)
{
    // Write your code here.
    int result = sqrt(N);
    cout << result;
    return result;

}
int main()
{
    long long int n;
    cin >> n;
    sqrtN(n);
}