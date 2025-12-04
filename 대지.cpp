/*
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf_s("%d", &n);
	int x, y;
	int max_x = 0, min_x = 10000;
	int max_y = 0, min_y = 10000;

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &x, &y);
		
		if (max_x < x) {
			max_x = x;
		}
		if (min_x > x) {
			min_x = x;
		}
		if (max_y < y) {
			max_y = y;
		}
		if (min_y > y) {
			min_y = y;
		}
	}

	

	int result = abs(max_x - min_x) * abs(max_y - min_y);

	printf("%d", result);

	return 0;
}
*/