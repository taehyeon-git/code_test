/*
#include <stdio.h>

int main() {
	int N = 0; // 인원 수
	scanf_s("%d", &N);
	int M = 0; // 게임 수
	scanf_s("%d", &M);

	int target[101] = {};
	int score[101] = {};

	for (int i = 0; i < M; i++) {
		scanf_s("%d", &target[i]);
	}

	for (int j = 0; j < M; j++) {
		int wrong = 0;

		for (int i = 0; i < N; i++) {
			int guess;
			scanf_s("%d", &guess);

			if (target[j] == guess)
				score[i]++;
			else
				wrong++;
		}

		score[target[j] - 1] += wrong; // 타겟 친구 점수에 틀린 사람 수만큼 추가

	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", score[i]);
	}

	return 0;
}
*/