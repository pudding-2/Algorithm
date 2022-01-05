//변수 초기화의 중요성을 알게 되었당

#include <stdio.h>

int main()
{
	int T;
	int H, W, N;
	
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		int X = 1;
		int Y = 0;
		scanf_s("%d %d %d", &H, &W, &N);
		for (int j = 0; j < N; j++) {
			Y = (Y >= H) ? 1 : Y + 1;
			if (j != 0)
				X = (Y == 1) ? X+1 : X;
		}
		printf("%d%02d\n", Y, X);
	}
	return 0;
}
