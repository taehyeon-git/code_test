/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 51
#define MAX 20001

// 비교 함수: 길이 → 사전순
int compare(const void* a, const void* b) {
    const char* s1 = (const char*)a;
    const char* s2 = (const char*)b;

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return len1 - len2;
    return strcmp(s1, s2);
}

int main(void) {
    int n;
    char arr[MAX][SIZE];

    // 단어 개수 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // 정렬
    qsort(arr, n, sizeof(arr[0]), compare);

    // 중복 제거 출력
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || strcmp(arr[i], arr[i + 1]) != 0) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}
*/