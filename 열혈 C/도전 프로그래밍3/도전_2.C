//2차원 달팽이배열을 만드는 방법을 배웠당

#include <stdio.h>

int func(int(*arr)[50], int row, int col);

int main()
{
	int n;
	scanf_s("%d", &n);

	int col = n;
	int row = n;
	int arr[50][50];

	func(arr, row, col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int func(int (*arr)[50], int row, int col)
{
	int num = 1;
	int x = 0, y = 0;
	int len = col;
	int dir = 1;

	for (int i = 0; i < len; i++) {
		arr[y][x++] = num++;
	}
	x--;
	len--;
	while (len != 0) {
		for (int i = 0; i < len; i++) {
			y += dir;
			arr[y][x] = num++;
		}

		dir = -dir;

		for (int i = 0; i < len; i++) {
			x += dir;
			arr[y][x] = num++;
		}
		len--;
	}
	return 0;
}
