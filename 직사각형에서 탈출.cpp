/*
#include <stdio.h>

int main() {
	int x, y, w, h;

	scanf_s("%d %d %d %d", &x, &y, &w, &h);

	int cha_x = w - x;
	int cha_y = h - y;

	if (cha_x < cha_y && cha_x < x && cha_x < y) {
		printf("%d", cha_x);
	}

	else if (cha_y < cha_x && cha_y < x && cha_y < y) {
		printf("%d", cha_y);
	}

	else if (x < cha_y && x < cha_x && x < y) {
		printf("%d", x);
	}

	else if (y < cha_y && y < cha_x && y < x) {
		printf("%d", y);
	}

	else if (x == y) printf("%d", x);

	return 0;
}
*/