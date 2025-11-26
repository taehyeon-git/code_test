#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int x = *(const int*)a; // 정렬할 배열의 [0]
	int y = *(const int*)b; // 정렬할 배열의 [1]
	if (x < y) return -1;
	else if (x > y) return 1;
	else return 0;
}

int BinarySearch(int* arr, int size, int target) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] == target) return 1;
		else if (arr[mid] < target) left = mid + 1;
		else right = mid - 1;
	}
	return 0;
}

int main() {
	int N = 0, M = 0;

	scanf_s("%d", &N);
	int* arr_N = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr_N[i]);
	}

	scanf_s("%d", &M);
	int* arr_M = (int*)malloc(M * sizeof(int));

	for (int i = 0; i < M; i++)
	{
		scanf_s("%d", &arr_M[i]);
	}

	qsort(arr_N, N, sizeof(int), compare); // compare가 1반환 시 swap.
		
	for (int i = 0; i < M; i++) {
		if (BinarySearch(arr_N, N, arr_M[i])) {
			printf("1\n");
		}
		else printf("0\n");
	}

	free(arr_N);
	free(arr_M);
	return 0;
}