//수가 나눠지는 규칙과 반례를 찾아서 풀었당

#include <stdio.h>

int main()
{
	int N;
	int count = 0;
	scanf_s("%d", &N);
	if (N % 5 == 0)
		count = N / 5;
	else {
		int num5 = N / 5;
		for (int i = num5; i > 0; i--) {
			if ((N - 5*i) % 3 == 0) {
				count = i + (N - 5 * i) / 3;
				break;
			}
		}
		if (N % 3 == 0 && count == 0)
			count = N / 3;
		if (count == 0)
			count = -1;
	}

	printf("%d", count);
	return 0;
}
