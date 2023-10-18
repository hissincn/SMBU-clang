#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        int z=1;
        for(int j=1;j<=i;j++){
            z*=j;
        }
        sum+=z;
    }
    printf("%d\n",sum);

    //判断sum里面是否含n
    int flag=0;
    while(sum){
        if(sum%10==n){
            flag=1;
            break;
        }
        sum/=10;
    }

    printf("%d\n",flag);

}