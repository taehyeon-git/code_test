// DFS & BFS 구현

#include <stdio.h>
#define MAX 1001 // 최대가 1000, 정점 번호가 1부터 N

int graph[MAX][MAX]; // 인접 행렬: graph[1][1] ~ graph[1000][1000]
int visited[MAX]; // 방문값 확인 변수
int N, M, V; // 정점, 간선, 시작값

void dfs(int v) {

	visited[v] = 1; // 이미 방문한 정점 표시
	printf("%d ", v); // 현재 정점 출력

	for (int i = 1; i <= N; i++) 
	{
		if (graph[v][i] == 1 && !visited[i]) // 조건 1.각 정점 연결상태 2.방문여부
		{
			dfs(i); // 재귀함수 
		}
	}
}

// 큐는 FIFO(First In First Out) 구조로, 먼저 들어온 정점을 먼저 탐색함
void bfs(int v) {
	int queue[MAX]; // BFS 탐색을 위한 큐 배열
	int front = 0, rear = 0; // 큐의 앞(front)과 뒤(rear) 인덱스

	visited[v] = 1; // 시작 정점 v를 방문 처리
	queue[rear++] = v; // 시작 정점을 큐에 삽입

	while (front < rear) { // 큐가 비어있지 않은 동안 반복
		int cur = queue[front++]; // 큐에서 가장 앞에 있는 정점을 꺼냄
		printf("%d ", cur); // 현재 정점 출력

		// 첫번째 반복에서 큐에 2, 3, 4가 들어감. 후에 반복에서는 전부 방문을 만족하기에 큐에 들어있는 값을 출력하기만 함.
		for (int i = 1; i <= N; i++) {
			// 연결되어 있고 아직 방문하지 않았다면
			if (graph[cur][i] == 1 && !visited[i]) {
				visited[i] = 1; // 방문 처리
				queue[rear++] = i; // 큐에 삽입
			}
		}

		/*
		// 디버깅용: 현재 큐 상태 출력
		printf("큐 상태: ");
		for (int i = front; i < rear; i++) {
			printf("%d ", queue[i]);
		}
		*/
	}
}

int main() {
	scanf_s("%d %d %d", &N, &M, &V);
	int a, b;

	for (int i = 0; i < M; i++) {
		
		scanf_s("%d %d", &a, &b);
		graph[a][b] = 1; // 정점 간선 연결 구현
		graph[b][a] = 1; // 정점 간선 연결 구현
	}

	dfs(V); 
	printf("\n");

	for (int i = 0; i <= N; i++) visited[i] = 0; // 방문 초기화 
	bfs(V);

	return 0;
}