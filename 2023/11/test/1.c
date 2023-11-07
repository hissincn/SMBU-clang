#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        double height, weight;
        scanf("%lf,%lf", &height, &weight);

        double t = weight / (height * height);

        if (t < 18) {
            printf("t=%.2f Lower weight!\n", t);
        } else if (t >= 18 && t < 25) {
            printf("t=%.2f Standard weight!\n", t);
        } else if (t >= 25 && t < 27) {
            printf("t=%.2f Higher weight!\n", t);
        } else {
            printf("t=%.2f Too fat!\n", t);
        }
    }

    return 0;
}
