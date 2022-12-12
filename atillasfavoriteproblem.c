#include<stdio.h>

int main()
{

    int t,n,max;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        max=0;
        scanf("%d",&n);
        char msg[n+1];
        scanf("%s",msg);

        for(int j=0;msg[j]!='\0';j++){
             if(msg[j]>max){
                max=msg[j];
             }
        }
        printf("%d\n",max-96);
    }

    return 0;
}