#include<stdio.h>

int main()
{

    int n,max=0,sum=0,temp;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        sum=sum+(num[n-1]-num[i]);
    }
    printf("%d",sum);

    return 0;
}