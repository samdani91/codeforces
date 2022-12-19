#include<stdio.h>

int main()
{

    int n,count=0;
    scanf("%d",&n);
    char str[n][4];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(int i=0;i<n;i++){
        if((str[i][0]=='+' && str[i][1]=='+')||(str[i][1]=='+' && str[i][2]=='+')) count++;
        else if((str[i][0]=='-' && str[i][1]=='-')||(str[i][1]=='-' && str[i][2]=='-')) count--;
    }
    printf("%d",count);

    return 0;
}