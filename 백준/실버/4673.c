/*
무식한 노가다 문제 힘들었당
*/
#include <stdio.h>

int d(int *list);

int main()
{
    int list[10500] = {0, };
    d(list);
    for (int i=1; i<10001; i++)
    {
        if (list[i] == 0)
            printf("%d \n", i);
    }
    return 0;
}

int d(int *list)
{
    int num;
    for(int i=1; i<10001; i++)
    {

        int result = i;
        int num = i;

        while(num>0){
            result += num%10;
            num /= 10;
        }

        list[result] = 1;
    }
    return 0;
}
