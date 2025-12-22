/*
#include <stdio.h>

int main() {
	int N;
	int i = 0;
	int count = 0;
	int min = 9999;

	scanf_s("%d", &N);

	for (i = 0; i <= (N / 5); i++) {
		int remain = N - (i * 5);
		if (remain % 3 == 0) {
			count = i + (remain / 3);
			if (count < min) {
				min = count;
			}
		}
	}

	if (min == 9999) {
		printf("-1");
	}

	else
		printf("%d", min);

	return 0;
}
*/

