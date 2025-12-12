#include <stdio.h>

int power_table(int base, int exponent) {

    int result = 1, i;

    for (i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {

    int base, exp;

    for (base = 1; base <= 6; base++) {
        for (exp = 1; exp <= 10; exp++) {
            printf("%d ", power_table(base, exp));
        }
        printf("\n");
    }

    return 0;
}
