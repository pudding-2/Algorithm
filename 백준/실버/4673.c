/*
무식한 노가다 문제 힘들었당
시간복잡도, 공간복잡도, 브루트포스 알고리즘 배웠당
시간복잡도-> 얼마나 오래 걸리는가 
big o 표기법 O(n), 시간이 대략적으로 얼마나 걸리는지 표기하는 방법
공간복잡도-> 얼마나 공간을 차지하는가
브루트포스 알고리즘-> 하나하나 다 대입
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
