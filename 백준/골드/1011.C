//처음으로 푼 골드문제! 어렵지만 재밌당

#include <stdio.h>

int main()
{
	int T;
	int x, y;
	int range;
	int count;
	int tail;
	int max;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &x, &y);
		range = y - x;
		count = 0;
		max = 1;
		for(long long j = 1; j < 1000000; j++) {
			if (j*j <= range && range <= (j + 1)*(j+1)) {
				if (j* j == range) {
					max = j;
					break;
				}
				else if ((j + 1) * (j + 1) == range) {
					max = j + 1;
					break;
				}
				else
					max = j;
			}
		}
		count += 2*max-1;
		tail = range - max*max;

		if (tail % max != 0) {
			count += tail / max + 1;
		}
		else
			count += tail / max;
		printf("%d\n", count);
	}
	return 0;
}
