//배열을 만들고 서로 일치하는지 비교하였당

#include <stdio.h>

int main()
{
	int qoduf[8];
	int asc = 0;
	int des = 0;
	for (int i = 0; i < 8; i++) {
		qoduf[i] = i + 1;
	}
	int q, w, e, r, t, y, u, a;
	scanf_s("%d %d %d %d %d %d %d %d", &q, &w, &e, &r, &t, &y, &u, &a);
	int qoduf2[8] = { q, w, e, r, t, y, u, a };
	for (int i = 0; i < 8; i++) {
		if (qoduf[i] == qoduf2[i]) {
			asc++;
		}
		if (qoduf[i] == qoduf2[7 - i])
			des++;
	}
	if (asc == 8)
		printf("ascending");
	else if (des == 8)
		printf("descending");
	else
		printf("mixed");
	return 0;
}
