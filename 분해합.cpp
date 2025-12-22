/*
#include <stdio.h>

int main() {
    int n = 0;
    scanf_s("%d", &n);

    int result = 0;

    for (int m = 1; m <= n; m++) {
        int sum = m;
        int temp = m;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == n) {
            result = m;
            break;
        }

    }

    printf("%d", result);

    return 0;
}
*/