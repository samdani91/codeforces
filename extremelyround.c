#include<stdio.h>

int main()
{

    int t,n,count,j,i=1;
    scanf("%d",&t);
    while(i<=t){
        count=0;
        scanf("%d",&n);
        int num[n];
        j=1;
        while(j<=n){
            num[j-1]=j;
                if(num[j-1]>=1 && num[j-1]<=9){
                count++;
            }
            else if(num[j-1]==10 || num[j-1]==20 || num[j-1]==30 ||num[j-1]==40||num[j-1]==50||num[j-1]==60||num[j-1]==70||num[j-1]==80||num[j-1]==90){
               count++;
            }
            else if(num[j-1]%100==0) count++;
           j++;
        }
        printf("%d\n",count);
        i++;
    }

    return 0;
}