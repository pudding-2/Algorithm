//벌집문제 해결

#include <stdio.h>

int main()
{
	int num;
	int count=1;
	int range = 1;
	scanf_s("%d", &num);

	for (int i = 1; i < num; i++) {
		if (i >= range) {
			count++;
			range += (count-1)*6;
		}
	}

	printf("%d", count);
	return 0;
}
