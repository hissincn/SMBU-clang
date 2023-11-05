#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++){
        //求水仙花
        int a,b,c;
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(i==a*a*a+b*b*b+c*c*c){
            printf("%d ",i);
        }
    }
    printf("\n");
}