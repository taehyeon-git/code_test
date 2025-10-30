#include <stdio.h>

int main()
{
	long long N = 0;
	int B = 0;
	char arr[32] = " ";
	int i = 0;

	scanf_s("%d %d", &N, &B);

	while (N > 0)
	{
		int r = N % B;
		if (r < 10) {
			arr[i] = '0' + r;
		}
		else
			arr[i] = 'A' + (r-10);
		N /= B;
		i++;
	}

	for(int j = i-1; j >= 0; j--)
	{
		printf("%c", arr[j]);
	}
	
	return 0;

}