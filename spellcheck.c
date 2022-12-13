#include<stdio.h>
#include<string.h>

int main()
{

    int t,n,count,i=1;
    scanf("%d",&t);
    while(i<=t){
        scanf("%d",&n);
        char name[n+1];
        scanf("%s",name);
       
        if(strlen(name)==5){
            count=0;
            for(int j=0;j<5;j++){
                if(name[i]=='T'|| name[i]=='i'||name[i]=='m'||name[i]=='u'||name[i]=='r'){
                   count++;
                }
            }
            if(count==5) printf("YES\n");
            else printf("NO\n");
        }else printf("NO\n");
        i++;
    }

    return 0;
}