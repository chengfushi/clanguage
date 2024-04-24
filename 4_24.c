//阶乘和递归
#include<stdio.h>
int roust(int x)
{
    if(x==0||x==1)
        return 1;
    return x* roust(x-1);
}
int main() {
    int n = 0;
    int m = 1;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
     sum+= roust(i);
    }
    printf("%d",sum);
}