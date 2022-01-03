//숫자야구 문제로 난수생성과 중복방지 메커니즘에 대해 배웠당.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int baseball(int* player, int* comput, int* strike, int* ball);

int main()
{
	srand((int)time(NULL));

	int player[3];
	int comput[3];
	int c = 0;

	while (c != 3) {
		int temp = rand() % 10;
		int check = 0;
		for (int i = 0; i < c; i++) {
			if (temp == comput[i]) {
				check = 1;
				break;
			}
		}
		if (check) {
			continue;
		}
		comput[c++] = temp;
	}

	int strike = 0;
	int ball = 0;
	int count = 1;

	int num1, num2, num3;
	printf("Start Game!\n\n");
	while (strike != 3) {
		strike = 0;
		ball = 0;
		printf("3개의 숫자 선택 : ");
		scanf_s("%d %d %d", &num1, &num2, &num3);
		player[0] = num1;
		player[1] = num2;
		player[2] = num3;
		baseball(player, comput, &strike, &ball);
		printf("%d번째 도전 결과: %dstrike, %dball!!\n\n", count++, strike, ball);
	}
	printf("\nGame Over!");
	return 0;
}

int baseball(int *player, int *comput, int *strike, int *ball)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (player[i] == comput[j] && i==j) {
				(* strike)++;
			}
			if (player[i] == comput[j] && i != j)
				(* ball)++;
		}
	}
	return 0;
}
