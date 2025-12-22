/*
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[100];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= M && sum > max) {
                    max = sum;
                }
            }
        }
    }

    printf("%d", max);
    return 0;
}
*/