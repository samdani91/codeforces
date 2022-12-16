#include<stdio.h>

int main()
{

    int t,n,sum,count;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        sum=0,count=0;
        scanf("%d",&n);
        int num[n];
        for(int j=0;j<n;j++){
            scanf("%d",&num[j]);
            sum=sum+num[j];
        }

        if(sum%2==0) printf("0");
        else{
            
             for(int j=0;j<n;j++){
                for(int k=1;k<=n;k++){
                    sum=0;
                    sum=num[j]/2 +num[k];
                }
             }
        }
    }

    return 0;
}