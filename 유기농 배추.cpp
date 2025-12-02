#include <stdio.h>
#define MAX 50

int field[MAX][MAX];
int visited[MAX][MAX];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

void dfs(int y, int x, int N, int M) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
            if (field[ny][nx] == 1 && !visited[ny][nx]) {
                dfs(ny, nx, N, M);
            }
        }
    }
}

int main() {
    int T;
    scanf_s("%d", &T);

    for (int t = 0; t < T; t++) {
        int M, N, K;
        scanf_s("%d %d %d", &M, &N, &K);

        // 배열 초기화
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                field[i][j] = 0;
                visited[i][j] = 0;
            }
        }

        // 배추 위치 입력
        for (int i = 0; i < K; i++) {
            int x, y;
            scanf_s("%d %d", &x, &y);
            field[y][x] = 1;
        }

        int worms = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (field[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j, N, M);
                    worms++;
                }
            }
        }
        printf("%d\n", worms);
    }
    return 0;
}
