/*
#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf_s("%d", &n);

        if (n == -1) break;  

        int sum = 0;

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {  
            printf("%d = ", n);
            int first = 1;
            for (int i = 1; i < n; i++) {
                if (n % i == 0) {
                    if (first) {
                        printf("%d", i);
                        first = 0;
                    }
                    else {
                        printf(" + %d", i);
                    }
                }
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}
*/