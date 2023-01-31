#include<stdio.h>

int main()
{

    int t,n,j,k,count,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int num[n];
        for(j=0;j<n;j++){
            scanf("%d",&num[j]);
        }
        for(j=0;j<n;j++){
            count=0;
            for(k=0;k<n;k++){
                if(num[j]==num[k]){
                    count++;
                }
            }
            if(count==1){
                c=j;
                break;
            }
        }
        
        printf("%d\n",c+1);
    }

    return 0;
}