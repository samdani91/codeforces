#include<stdio.h>

int main(int argc,char *argv[])
{

    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char str[n+1],str2[n+1];
        scanf("%s",str);
        scanf("%s",str2);
        int count=0;

        for(int i=0;i<n;i++){
        
        if((str[i]!=str2[i]))
            if(((str[i]=='G' && str2[i]!='B') || (str[i]=='B' && str2[i]!='G'))){
                count=1;
                break;
            }else if((str[i]=='R' || str2[i]=='R')){
                count=1;
                break;
            }
        }
        if(count==0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}