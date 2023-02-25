#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int t,b;
    char str[51];
    scanf("%d",&t);
    while(t--)
    {
        b=0;
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++){
            if(str[i]=='B') b++;

        }
        if(b*2==strlen(str)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}