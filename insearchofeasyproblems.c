#include<stdio.h>

int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
         if(num[i]==1)
        count=1;
    }
    if(count==1) printf("HARD");
    else printf("EASY");
    return 0;
}