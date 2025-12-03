/*
#include <stdio.h>

int main() {
	int N;
	int num = 0;
	int count = 0;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num);
		
		int isPrime = 1;
		if (num == 1) isPrime = 0;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				isPrime = 0;
			}
		}


		if (isPrime) {
			count++;
		}
	}

	printf("%d", count);



	return 0;
}
*/