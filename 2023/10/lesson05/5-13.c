//输入:在一行中给出一个不超过12的正整数N。输出:在一行中输出阶乘的值
#include<stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%d\n",sum);
    return 0;
}
