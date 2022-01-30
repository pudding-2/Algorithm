//소수를 구별하는 방법을 배웠당.

#include <stdio.h>
int main()
{
	int N;
	int count=0;
	int qoduf[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &qoduf[i]);
		for (int j = 2; j < qoduf[i]; j++) {
			if (qoduf[i] % j == 0) {
				qoduf[i] = -1;
				break;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (qoduf[i] > 1) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
