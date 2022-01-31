//3개의 수의 합의 최대를 M 이하의 조건에서 구하는 문제를 부르트포스 알고리즘으로 해결했다. 

#include <stdio.h>

int qoduf[100];

int main() {
	int N, M;
	int sum = 0;
	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &qoduf[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++){
				if (sum < qoduf[i] + qoduf[j] + qoduf[k] && qoduf[i] + qoduf[j] + qoduf[k] <= M)
					sum = qoduf[i] + qoduf[j] + qoduf[k];
			}
		}
	}
	printf("%d", sum);

	return 0;
}
