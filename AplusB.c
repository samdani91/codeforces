#include<stdio.h>

int main()
{

    int t;
    char num[4];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%s",num);
        printf("%d\n",(num[0]-'0')+(num[2]-'0'));
    }


    return 0;
}