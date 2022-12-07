#include<stdio.h>

int main()
{

    int k,n,w,cost,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        cost=i*k;
        sum=sum+cost;
    }
    if(n>=sum) printf("0");
    else{
        printf("%d",sum-n);
    }

    return 0;
}