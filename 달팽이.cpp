#include <stdio.h>

/*
int main()
{
	int A, B, V;
	int day = 1;
	int count= 0;

	scanf_s("%d %d %d", &A, &B, &V);

	count = V - A + B;

	while (1) {
		count = count - A;
		day++;
		if (count <= 0)
			break;
		count = count + B;
	}

	printf("%d", day);

	return 0;
}
*/

/*
int main() {
	int A, B, V;
	scanf_s("%d %d %d", &A, &B, &V);

	int day = 0;
	int count = 0;

	while (1) {
		day++;
		count = count + A;
		if (count >= V)
			break;
		count = count - B;
	}
	printf("%d", day);
	return 0;
}
*/
int main()
{
	int A, B, V;
	scanf_s("%d %d %d", &A, &B, &V);

	int day = (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		day++;

	printf("%d", day + 1);
	return 0;
}
// 마지막 날은 미끄러지지 않는다.