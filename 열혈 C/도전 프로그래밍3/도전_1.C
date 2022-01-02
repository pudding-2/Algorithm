/*
행 = 열 2차원 배열을 90도 회전시키는 방법에 대해 배웠당.
*/

#include <stdio.h>

int func(int (*qoduf)[4], int (*qoduf2)[4]);

int main()
{
    int qoduf2[4][4];
    int qoduf[4][4];
    int k=1;
    for (int i=0; i<4; i++)
    {   
        int j=0;
        while (j<4)
        {    
            qoduf[i][j] = k;
            k++;
            j++;
        }
    }
    func(qoduf, qoduf2);
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
            printf("%d ", qoduf2[i][j]);
        printf("\n");
    }
    return 0;
}

int func(int (*qoduf)[4], int (*qoduf2)[4])
{
    int k=3;
    for (int j=0; j<4; j++)
    {
        for (int i=0; i<4; i++)
        {
            qoduf2[i][k] = qoduf[j][i];
        }
        k--;
    }
    return 0;
}
