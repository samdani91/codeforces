#include<stdio.h>

int main()
{

    int a,b,c,d,temp;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int num[4];
    num[0]=a,num[1]=b,num[2]=c,num[3]=d;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(int i=0;i<=2;i++){
        printf("%d ",num[3]-num[i]);
    }
    return 0;
}