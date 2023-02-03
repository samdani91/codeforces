#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int length=strlen(str);
        int count=length;
        if((str[0]=='1'&&str[length-1]=='1')||(str[0]=='0'&&str[length-1
            ]=='0')) printf("%d\n",length);
        else{
            for(int i=0,j=length-1;i<length/2;i++,j--)
            {   
                if((str[i]=='1'&&str[j]=='1')||(str[i]=='0'&&str[j]=='0'))
                {
                    
                    break;
                }
                else if((str[i]=='1'&&str[j]=='0')||(str[i]=='0'&&str[j]=='1'))
                {
                    count=count-2;
                }
                
            }
            printf("%d\n",count);
        }
    }

    return 0;
}