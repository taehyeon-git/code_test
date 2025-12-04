/*
#include <stdio.h>

int main() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	int mid = a + b + c - max - min;

	if (max < mid + min)printf("%d", (a + b + c));
	else {
		max = mid + min - 1;
		printf("%d", (max + mid + min));
	}

	return 0;
}
*/