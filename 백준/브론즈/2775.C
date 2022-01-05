//규칙을 찾고 2차원배열을 이용해서 풀었당

#include <stdio.h>

int func(int (*qoduf)[15], int k, int n);

int main()
{
	int T;
	int k, n;
	int qoduf[15][15] ={0,};
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d\n%d", &k, &n);
		func(qoduf, k, n);
		printf("%d\n", qoduf[k][n-1]);
	}
	return 0;
}

int func(int (*qoduf)[15], int k, int n)
{
	int plus = 1;
	for (int i = 0; i < 15; i++) {
		qoduf[i][0] = 1;
		qoduf[0][i] = plus++;
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			qoduf[i][j] = qoduf[i - 1][j] + qoduf[i][j - 1];
		}
	}
	return 0;
}
