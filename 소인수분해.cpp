/*
#include <stdio.h>

int isPrime(int num) {
	if (num <= 1) return 0;
	if (num == 2) return 1;
	if (num % 2 == 0) return 0;
	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0) return 0;
		
	}
	return 1;
}

int main() {
	int N;
	int i = 2;
	scanf_s("%d", &N);
	

	while (N > 1) {

		if (isPrime(N)) {
			printf("%d", N);
			break;
		}

		if (N % i == 0) {
			printf("%d\n", i);
			N = N / i;
		}

		else if (N % i != 0) {
			i++;
		}

	}
	
	return 0;
}
*/