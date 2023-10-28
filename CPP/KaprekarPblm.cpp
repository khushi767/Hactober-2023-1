#include <iostream>
#include <cmath>

bool isKaprekar(int num, int base) {
  
    long long square = static_cast<long long>(num) * num;
  
    int numDigits = 0;
    long long temp = square;
    while (temp > 0) {
        temp /= base;
        numDigits++;
    }

    long long divisor = 1;
    for (int i = 0; i < numDigits / 2; i++) {
        divisor *= base;
    }

    long long part1 = square / divisor;
    long long part2 = square % divisor;

    return (part1 + part2 == num);
}

int main() {
    int num, base;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Enter the base: ";
    std::cin >> base;

    if (isKaprekar(num, base)) {
        std::cout << num << " is a Kaprekar number in base " << base << std::endl;
    } else {
        std::cout << num << " is not a Kaprekar number in base " << base << std::endl;
    }

    return 0;
}


//Output:

// Enter a number: 9
// Enter the base: 10
// 9 is a Kaprekar number in base 10
