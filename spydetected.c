#include<stdio.h>

int main()
{

    int t,n,count,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        count=0;
        scanf("%d",&n);
        int num[n];
        for(int j=0;j<n;j++){
            scanf("%d",&num[i]);
        }
        int j;
        for(j=0;j<n;j++){
           // count=0;
            for(int k=j+1;k<n;k++){

                if(num[j]==num[k]){
                    count++;
                 //   if(num[j]!=num[k]) c=j;                 
                }
                if(count==0){
                    c=j;
                    //break;
                }
            }
        }
        printf("%d\n",c);
    }

    return 0;
}