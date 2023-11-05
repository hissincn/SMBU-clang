#include <stdio.h>

int main() {
    double pi = 0.0;
    double term = 1.0;
    double epsilon = 1e-6;
    int sign = 1;
    int n = 1;

    do {
        pi += sign * term;
        n += 2;
        sign = -sign;
        term = 1.0 / n;
    } while (term >= epsilon);

    pi *= 4.0;

    printf("π的近似值为: %lf\n", pi);

    return 0;
}
