#include<stdio.h>

int main()
{

    int n,k,count=0;
    scanf("%d",&n);
    int num[n];
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]>0)
        if(num[i]>=num[k-1]) count++;
    }
    printf("%d",count);

    return 0;
}