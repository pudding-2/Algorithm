//피보나치 수열의 규칙을 2차원 배열로 풀어서 빠르게 계산을 할 수 있는 방법을 알게 되었당. 

#include <stdio.h>

int main() {
	int N, T;
	int qoduf[40][2];
	qoduf[0][0] = 1;
	qoduf[0][1] = 0;
	qoduf[1][0] = 0;
	qoduf[1][1] = 1;
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &N);
		for (int i = 2; i <= N; i++) {
			qoduf[i][0] = qoduf[i - 2][0] + qoduf[i - 1][0];
			qoduf[i][1] = qoduf[i - 2][1] + qoduf[i - 1][1];
		}
		printf("%d %d\n", qoduf[N][0], qoduf[N][1]);
	}
}
