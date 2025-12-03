/*
#include <stdio.h>

int main() {
	int M, N;
	int sum = 0, min = 0;
	int arr[10000] = { 0 };
	scanf_s("%d", &M);
	scanf_s("%d", &N);
	int j = 0;

	for (M; M <= N; M++) {

		int isPrime = 1;

		if (M == 1) isPrime = 0;
		for (int j = 2; j < M; j++) {
			if (M % j == 0) {
				isPrime = 0;
			}
		}

		if (isPrime) {
			sum += M;
			for (int i = 0; i < M; i++) {
				arr[j++] = M;
				break;
			}
		}
	}


	if (sum) {
		printf("%d\n%d", sum, arr[0]);
	}
	else
		printf("-1");


	return 0;
}
*/