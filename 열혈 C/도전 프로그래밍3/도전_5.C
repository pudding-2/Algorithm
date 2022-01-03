//난수 생성과 응용에 대해서 배웠당.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand((int)time(NULL));
	int lose = 0;
	int win = 0;
	int draw = 0;
	while (lose == 0) {
		int com = rand() % 3 + 1;
		int player;
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf_s("%d", &player);
		if (player > 3 || player < 1) {
			printf("다시 입력해주세요\n\n");
			continue;
		}

		int result = rsp(com, player);
		printf("\n");
		switch (result) {
		case 1:
			lose++;
			break;
		case 2:
			draw++;
			break;
		case 3:
			win++;
			break;
		
		}
	}
	printf("게임의 결과 : %d승, %d무", win, draw);
}

int rsp(int com, int player)
{
	if (player == 1)
		printf("당신은 바위 선택, ");
	else if (player == 2)
		printf("당신은 가위 선택, ");
	else if (player == 3)
		printf("당신은 보 선택, ");
	if (com == 1)
		printf("컴퓨터는 바위 선택, ");
	else if (com == 2)
		printf("컴퓨터는 가위 선택, ");
	else if (com == 3)
		printf("컴퓨터는 보 선택, ");
	if (com == player) {
		printf("비겼습니다!\n");
		return 2;
	}
	else if (player + 1 == com || player - 2 == com) {
		printf("이겼습니다!\n");
		return 3;
	}
	else {
		printf("당신이 졌습니다!\n");
		return 1;
	}
}
