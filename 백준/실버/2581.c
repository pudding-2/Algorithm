//소수를 판별하는 방법에 대해 알게 되었당

#include <stdio.h>
int main()
{
	int M, N;
	int sum = 0;
	int min = -3;
	int qoduf[10000];
	scanf_s("%d\n%d", &M, &N);
	for (int i = M; i <= N; i++) {
		qoduf[i] = i;
		for (int j = 2; j < i; j++) {
			if (qoduf[i] % j == 0) {
				qoduf[i] = -1;
				break;
			}
		}
	}
	for (int i = M; i <=N; i++) {
		if (qoduf[i] > 1) {
			sum += qoduf[i];
		}
		if (qoduf[i] > 1 && min == -3) {
			min = qoduf[i];
		}
	}
	if (sum == 0)
		printf("%d", - 1);
	else printf("%d\n%d", sum, min);

	return 0;
}
