/*
#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b)) // a<b면 a반환, 아니면 b반환

char board[51][51];

int main() {
    int N, M;
    scanf_s("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf_s("%s", board[i], sizeof(board)); // 한 줄 전체로 받음
    }

    int answer = 64; // 최대 8*8 칸 모두 칠하는 경우

    // 모든 8x8 시작점 검사
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int repaintW = 0; // 왼쪽 위가 W인 경우
            int repaintB = 0; // 왼쪽 위가 B인 경우

            // 8x8 내부 검사
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    // (x+y) 짝수 → 시작 색, 홀수 → 반대 색
                    if ((x + y) % 2 == 0) {
                        if (board[i + x][j + y] != 'W') repaintW++;
                        if (board[i + x][j + y] != 'B') repaintB++;
                    }
                    else {
                        if (board[i + x][j + y] != 'B') repaintW++;
                        if (board[i + x][j + y] != 'W') repaintB++;
                    }
                }
            }
            // 두 경우 중 최소값
            int localMin = MIN(repaintW, repaintB);
            if (localMin < answer) answer = localMin;
        }
    }

    printf("%d\n", answer);
    return 0;
}
*/