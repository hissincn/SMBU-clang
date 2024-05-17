#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=a;
    printf("%d.%d\n",*p++,*(p++));
    printf("%d.%d",a[0],a[1]);

}