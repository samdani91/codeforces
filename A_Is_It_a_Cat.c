#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc,char *argv[])
{

    
    int t,n,cnt,cnt2,cnt3,cnt4;
    scanf("%d",&t);
    while(t--){
        cnt=0,cnt2=0,cnt3=0,cnt4=1;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);

        for(int i=0;i<strlen(str);i++){
            char c=str[i];
            str[i]=tolower(c);
            
        }
        //printf("%s\n",str);

        for(int i=0;i<strlen(str)-1;i++){
            if(str[i]!=str[i+1]){
                if(str[i]=='m' && str[i+1]=='e') cnt=1;
                else if(str[i]=='e' && str[i+1]=='o') cnt2=1;
                else if(str[i]=='o' && str[i+1]=='w') cnt3=1;
                else if(str[i]!='m'||str[i]!='e'||str[i]!='o'||str[i]!='w') cnt4=0;
            }

        }

        if(cnt4==0||cnt3==0 ||cnt==0||cnt2==0) printf("NO\n");
        else printf("YES\n");

    }

    return 0;
}