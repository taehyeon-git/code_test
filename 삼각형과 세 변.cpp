/*
#include <stdio.h>

int main() {
	int m1, m2, m3;
	int max, mid, min;

	while (1) {

		scanf_s("%d %d %d", &m1, &m2, &m3);
		if (m1 == 0 && m2 == 0 && m3 == 0) break;

		max = m1;
		if (m2 > max) max = m2;
		if (m3 > max) max = m3;

		min = m1;
		if (m2 < min) min = m2;
		if (m3 < min) min = m3;

		mid = m1 + m2 + m3 - max - min;

		if (m1 == m2 && m2 == m3 && m3 == m1)printf("Equilateral");
		else if (max >= mid + min) printf("Invalid");
		else if (m1 == m2 || m2 == m3 || m3 == m1)printf("Isosceles");
		else printf("Scalene");

	}


	return 0;
}
*/