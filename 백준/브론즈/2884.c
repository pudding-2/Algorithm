#include <stdio.h>

/*
함수 처음 사용해서 푼 문제 헤헤
*/

int func(int *num1, int *num2);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    func(&num1, &num2);
    printf("%d %d", num1, num2);
    return 0;
}

int func(int *num1, int *num2)
{
    if (*num2 < 45)
    {
        *num1 -= 1;
        *num2 += 60;
    }
    if (*num1 < 0)
        *num1 += 24;
    *num2 -= 45;
    return 0;
}
