//한수에 대해 알게 되었당.

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int result = 0;

    int list[1000];
    for (int i = 1; i < N+1; i++) {
        if (i < 100) {
            result++;
            continue;
        }
        if (i / 100 - (i % 100 / 10) == (i % 100 / 10) - i % 10) {
            result++;
            continue;
        }
    }
    printf("%d", result);
    return 0;
}
