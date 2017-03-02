#include <iostream>
#include <gmpxx.h>

mpz_class collatz(mpz_class &n) {
    if (mpz_odd_p(n.get_mpz_t())) {
        n *= 3;
        n += 1;
    } else {
        n /= 2;
    }
    return n;
}

void check_collatz(mpz_class n) {
    while (n != 1) {
        n = collatz(n);
    }
}

int main() {
#pragma omp parallel
    {
        mpz_class x;
#pragma omp for
        for (long check = 1; check <= std::numeric_limits<long>::max(); check++) {
            for (x = check; x != 1; collatz(x));
        }
    }
}