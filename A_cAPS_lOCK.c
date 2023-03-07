#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char *argv[])
{

    char str[101];
    scanf("%s",str);
    int count=0,cnt2=0,cnt3=0;


    if(str[0]>='a' && str[0]<='z') count=1;
    else if(str[0]>='A' && str[0]<='Z') cnt3=1;

    for(int i=1;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            cnt2=1;
        }
    }

    if((count==1 || cnt3==1) && cnt2==0){
        for(int i=0;i<strlen(str);i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=toupper(str[i]);
            }else str[i]=tolower(str[i]);
        }
    }
    

    if(cnt2==1) printf(str);
    else printf(str);

    return 0;
}