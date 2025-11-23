#include <stdio.h>
#define MAX 100

int N, M;
int arr[MAX][MAX];
int visited[MAX][MAX];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

typedef struct {
	int x, y, dist;
}Node;

Node queue[MAX * MAX]; // 큐 배열 선언
int front = 0, rear = 0;

void enqueue(Node n) { queue[rear++] = n; }
Node dequeue() { return queue[front++]; }
int IsEmpty() { return front == rear; }

int bfs() {
	Node start;
	start.x = 0;
	start.y = 0;
	start.dist = 1;
	visited[0][0] = 1;
	enqueue(start);

	while (!IsEmpty()) {
		Node cur = dequeue();

		if (cur.x == N - 1 && cur.y == M - 1) {
			return cur.dist;
		}

		for (int k = 0; k < 4; k++) {
			int nx = cur.x + dx[k];
			int ny = cur.y + dy[k];

			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (arr[nx][ny] == 1 && !visited[nx][ny]) {
					visited[nx][ny] = 1;
					Node next;
					next.x = nx;
					next.y = ny;
					next.dist = cur.dist + 1;
					enqueue(next);
				}
			}
		}

		
	}
	
}

int main() {
	scanf_s("%d %d", &N, &M);
	getchar();

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char ch;
			scanf_s("%c", &ch);
			arr[i][j] = ch - '0';
		}
		getchar();
	}
	int result = bfs();

	printf("%d\n", result);

	return 0;
}