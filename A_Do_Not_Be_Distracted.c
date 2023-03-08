#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int t,n,flag;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int count[26]={0};
        flag=0;
        

        for(int i=0;i<strlen(str);i++){ 
            count[str[i]-'A']++;

            if(count[str[i]-'A']>1 && str[i]!=str[i-1]){
                flag=1;
                break;
            }  

        }

        if(flag==1) printf("NO\n");
        else printf("YES\n");
        
        
       

    }

    return 0;
}