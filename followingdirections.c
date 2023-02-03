#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int t,n,x,y,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        x=0,y=0,count=0;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='R') x=x+1;
            else if(str[i]=='L') x=x-1;
            else if(str[i]=='U') y=y+1;
            else if(str[i]='D') y=y-1;
            if(x==1 && y==1) count=1;
        }
        if(count==1) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}