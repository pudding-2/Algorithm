//원 안에 한 점만이 속해있는 경우를 이용하여 문제를 풀었다. math.h의 함수를 다루는 법도 익혔당.

#include <stdio.h>
#include <math.h>

int main() {
	int T, x1, x2, y1, y2, n,cx,cy,r, count;
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf_s("%d", &n);
		count = 0;
		for (int j = 0; j < n; j++) {
			scanf_s("%d %d %d", &cx, &cy, &r);
			if (sqrt(pow((cx - x1), 2) + pow((cy - y1), 2)) < r) {
				if (sqrt(pow((cx - x2),2) + pow((cy - y2),2)) > r) {
					count++;
				}
			}
			else {
				if (sqrt(pow((cx - x2), 2) + pow((cy - y2), 2)) < r) {
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
}
