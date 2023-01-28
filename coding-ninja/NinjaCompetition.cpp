#include <iostream>
#include <list>
#include <cmath>

// Big O(sqrt(n))
bool getFactors(int n) {
    std::list<int> factors;
    for (int i = 1; i <= sqrt(n); i++) {
        int residuo = n % i;
        if (residuo == 0) {
            int b = n / i;
            factors.push_back(i);
            // Add only once if b is sqrt of n, eg 36, 6x6
            if (b != sqrt(n))
                factors.push_back(b);
        }
    }
    int even = 0, odd = 0;
    for (int i: factors) {
        if(i % 2 == 0)
            even++;
        else
            odd++;
    }
    std::cout<<even<<odd<<std::endl;
    if(even == odd)
        return true;
    else
        return false;
}

int main() {
    int number;
    std::cout << "Ingresa el número" << std::endl;
    std::cin >> number;
    std::cout << "factores:" << std::endl;
    bool factors = getFactors(number);

    std::cout << factors << std::endl;

    return 0;
}