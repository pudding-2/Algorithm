//int의 범위를 고려하는 것이 중요하다는걸 알게 되었고 반복문 대신 수식으로 간결하고 효율적으로 정리하는 법에 대해 배웠당

#include <stdio.h>

static int qoduf[1000000];

int main(void)
{
    int N, B, C, j;
    long long sum = 0;
    scanf_s("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &qoduf[i]);
    }
    scanf_s("%d %d", &B, &C);
    for (int i = 0; i < N; i++) {
        j = 0;
        if (qoduf[i] <= B) {
            qoduf[i] = 1;
        }
        else
            if ((qoduf[i] - B) % C == 0) {
                j = (qoduf[i] - B) / C;
            }
            else
                j = (qoduf[i] - B) / C + 1;
        qoduf[i] = 1 + j;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", qoduf[i]);
        sum += qoduf[i];
    }
    printf("\n%lld", sum);
    return 0;
}
