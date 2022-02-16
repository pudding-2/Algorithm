//범위를 적절하게 설정하여 정사각형을 이루는 경우들을 알아봤다.

#include <stdio.h>
#include <string.h>

int main()
{
	int N, M;
	int range = 1;
	scanf_s("%d %d", &N, &M);
	int qoduf[50][50];
	memset(qoduf, -1, sizeof(qoduf));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &qoduf[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (N <= M) {
				for (int k = 0; k < M; k++) {
					if (i + k >= N || j + k >= M) break;
					if ((qoduf[i][j] == qoduf[i + k][j]) && (qoduf[i][j + k] == qoduf[i + k][j + k]) && (qoduf[i + k][j] == qoduf[i + k][j + k])) {
						if (range < (k + 1) * (k + 1)) {
							range = (k + 1) * (k + 1);
						}
					}
				}
			}
			else {
				for (int k = 0; k < N; k++) {
					if (i + k >= N || j + k >= M) break;
					if ((qoduf[i][j] == qoduf[i + k][j]) && (qoduf[i][j + k] == qoduf[i + k][j + k]) && (qoduf[i + k][j] == qoduf[i + k][j + k])) {
						if (range < (k + 1) * (k + 1)) {
							range = (k + 1) * (k + 1);
						}
					}
				}
			}
		}
	}

	printf("%d", range);

	return 0;
}
