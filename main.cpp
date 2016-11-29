#include <iostream>

unsigned long collatz(unsigned long n) {
    unsigned long result;
    if (n & 1) {//Odd
        result = (3 * n) + 1;
    } else {//Even
        result = n / 2;
    }
    return result;
}

int main() {
    unsigned long x = 8954309234986730960;
    while (true) {
        std::cout << x << std::endl;
        if (x == 1) break;
        x = collatz(x);
    }
    return 0;
}
