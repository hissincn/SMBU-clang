#include<stdio.h>
int main(){
    int h;
    scanf("%d",&h);
    //打印高度为h的空心倒三角形
    for(int i=0;i<h;i++){
        //打印空格
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //打印星号
        for(int j=0;j<2*(h-i)-1;j++){
            if(j==0||j==2*(h-i)-2||i==h-1||i==0){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}