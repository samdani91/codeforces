#include<stdio.h>

int main()
{

    int t,num[3],count,store=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        count=0;
       for(int j=0;j<3;j++){
        scanf("%d",&num[j]);
        if(num[j]==1) count++;
       }
       if(count>=2) store++;

    }
    printf("%d",store);


    return 0;
}