#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int t;
    scanf("%d",&t);
    while(t--){
        char str[50],ch;
        scanf("%s",str);
        scanf(" %c",&ch);
        int count=0;
        //int mid=strlen(str)/2;

        for(int i=0;i<strlen(str);i++){
            if(str[i]==ch && (i+1)%2!=0) {
                count=1;
                break;
            }
            
        }
        if(count==1) printf("YES\n");
        else printf("NO\n");


    }

    return 0;
}