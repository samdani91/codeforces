#include<stdio.h>

int main()
{

    int n,temp,sum1=0,sum2=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++) scanf("%d",&num[i]);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",num[i]);
    if(n%2!=0){
        for(int i=0;i<n;i+=2){
          sum1=sum1+num[i];
        }
        for(int i=1;i<n;i+=2){
          sum2=sum2+num[i];
        }
    }
    if(n%2==0){
        for(int i=1;i<n;i+=2){
          sum1=sum1+num[i];
        }
        for(int i=0;i<n;i+=2){
          sum2=sum2+num[i];
        }

    }

    printf("\n%d %d",sum1,sum2);

    return 0;
}