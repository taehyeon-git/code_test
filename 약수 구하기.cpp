/*
#include <stdio.h>

int main() {
	int N = 0, K = 0;
	int q = 1;
	int i = 0;
	int arr[10000];
	int count = 0;
	scanf_s("%d %d", &N, &K);

	while (!(N+1 == q)) {
		if (N % q == 0) {
			arr[i] = q;
			i++;
			count++;
		}
		q++;
	}


	if (count < K) {
		printf("0");
	}

	if (count >= K)
		printf("%d", arr[K - 1]);
	

	return 0;
}
*/