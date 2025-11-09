/*
#include <stdio.h>
#include <string.h>

#define SIZE 10  // 원하는 배열 크기 조절 가능

int main() {
    char arr[SIZE][SIZE][10];  // 각 칸에 문자열 저장 (예: "3/2")
    int count = 0;
    int max = SIZE * SIZE;
    int idx = 0;

    for (int sum = 2; count < max; sum++) //sum은 분자, 분모의 합
    {
        if (sum % 2 == 0) {
            // 짝수 대각선: 위에서 아래로
            for (int i = 1; i < sum; i++) {
                int j = sum - i;
                if (i <= SIZE && j <= SIZE) {
                    sprintf_s(arr[i - 1][j - 1], "%d/%d", i, j);
                    count++;
                    if (count >= max) break;
                }
            }
        }
        else {
            // 홀수 대각선: 아래에서 위로
            for (int j = 1; j < sum; j++) {
                int i = sum - j;
                if (i <= SIZE && j <= SIZE) {
                    sprintf_s(arr[i - 1][j - 1], "%d/%d", i, j);
                    count++;
                    if (count >= max) break;
                }
            }
        }
    }

    // 출력
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%s\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
#include <stdio.h>

int main() {

    int line = 1;
    int N;

    scanf_s("%d", &N);

    while (N > line) // 반복이 끝나면 N은 해당 대각선 내에서 몇 번째 분수인지를 의미함
    {
        N -= line;
        line++;
    }

    if (line % 2 == 1) // 홀수번 대각선(아래서 위로)
    {
        printf("%d/%d\n", line + 1 - N, N); // 
    }
    else // 짝수번 대각선(위에서 아래로) 
    {
        printf("%d/%d\n", N, line + 1 - N);
    }

    return 0;
}