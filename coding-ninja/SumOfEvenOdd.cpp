//
// Created by shawm on 26-01-2023.
//
#include <iostream>
#include <vector>

std::vector<int> sumOfEvenOdd(long long num)
{
    int sumEven = 0, sumOdd = 0;
    std::vector<int> result;
    while(num != 0) {
        int rem = 0;
        rem = num % 10;
        std::cout << rem <<std::endl;
        if(rem % 2 == 0)
        {
            sumEven = sumEven+rem;
        }
        else
        {
            sumOdd = sumOdd+rem;
        }
        num = num/10;
    }
    result.push_back(sumEven);
    result.push_back(sumOdd);
    return  result;
}
int main()
{
    long long n;
    std::cout << "Enter num";
    std::cin>>n;
    std::vector<int> v;
    v = sumOfEvenOdd(n);
    for(int i = 0; i < v.size();i++)
    {
        std::cout << v[i]<<" ";
    }

}