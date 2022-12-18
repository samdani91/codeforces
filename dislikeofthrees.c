#include<stdio.h>

int main()
{

    int t,n,k,j;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int num[n];
        k=0,j=0;
        while(j<n){
            k++;
            if(k%3!=0 && k%10!=3){
                num[j]=k;
                j++;
            }
            
        }
        printf("%d\n",num[n-1]);
    }

    return 0;
}