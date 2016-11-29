#include <iostream>
#include <gmpxx.h>

mpz_class collatz(mpz_class n) {
    if (mpz_odd_p(n.get_mpz_t())) {
        n *= 3;
        n += 1;
    } else {
        n /= 2;
    }
    return n;
}

int main() {
    mpz_class x = 27;
    while (true) {
        std::cout << x.get_str(10) << std::endl;
        if (x == 1) break;
        x = collatz(x);
    }
    return 0;
}
