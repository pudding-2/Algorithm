/*
함수의 사용 방법과 c언어 자료형의 표현범위를 배웠당 냥냥
*/
long long sum(int *a, int n)
{  
    long long ans = 0;
    for (int i=0; i<n; i++)
        ans += a[i];
    return ans;
}
