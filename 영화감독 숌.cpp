/*
#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	scanf_s("%d", &n);

	int count = 0;
	int num = 666;
	char s1[10000];
	

	while (1) {
		sprintf_s(s1, "%d", num);

		char* p = strstr(s1, "666");
		if (p != NULL) {
			count++;
		}

		if (count == n) {
			break;
		}
		else {
			num++;
		}
	}

	printf("%d", num);

	return 0;
}
*/
