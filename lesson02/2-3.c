//转换摄氏温度为华氏温度

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/21

#include <stdio.h>
int main(){
    float f,c;
    printf("请输入摄氏温度：");
    scanf("%f",&c);
    f = 1.8*c+32;
    printf("华氏温度为：%f\n",f);
    return 0;
}