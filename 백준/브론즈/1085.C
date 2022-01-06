/*배열 항목을 크기순으로 정렬하는 방법을 이용해서 문제를 풀었당
후에 더욱 효율적인 방법으로 단축시키는게 필요할 것 같다.
*/

#include <stdio.h>

int main()
{
	int x, y, w, h, temp;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	int qoduf[4] = { x, y, w - x, h - y };
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			if (qoduf[i] > qoduf[i + 1]) {
				temp = qoduf[i + 1];
				qoduf[i + 1] = qoduf[i];
				qoduf[i] = temp;
			}
		}
	}
	printf("%d", qoduf[0]);
	return 0;
}
