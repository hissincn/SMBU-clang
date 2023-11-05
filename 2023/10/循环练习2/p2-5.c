#include<stdio.h>
int main(){
    int  h;
    printf("input z=?\n");
    scanf("%d",&h);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==1||i==h||j==1||j==2*i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
