#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max,min;
    if(a>b){
        max=a;
        min=b;
    }else{
        max=b;
        min=a;
    }
    if(c>max){
        max=c;
    }
    if(c<min){
        min=c;
    }
    if(d>max){
        max=d;
    }
    if(d<min){
        min=d;
    }
    printf("%d\n%d\n",min,max);
}