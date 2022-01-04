//지그재그 패턴의 분모분자 증감문제 풀었다

#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int temp;
	int count = 1;
	int num;
	scanf_s("%d", &num);

	while(count < num) {
		temp = ++b;
		++count;
		while (a != temp && count < num) {
			a++;
			b--;
			count++;
		}
		if (count < num) {
			temp = ++a;
			count++;
		}
		while (b != temp && count < num) {
			a--;
			b++;
			count++;
		}
	}

	printf("%d/%d", a, b);
	return 0;
}
