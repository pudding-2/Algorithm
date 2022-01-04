//식으로 표현하는게 헷갈렸던 문제

#include <stdio.h>

int main()
{
	int A, B, V;
	scanf_s("%d %d %d", &A, &B, &V);
	int count = 1;
	
	if((V - B) % (A - B) == 0)
		printf("%d", (V-B)/(A-B));
	else
		printf("%d", (V - B) / (A - B)+1);
	return 0;
}
