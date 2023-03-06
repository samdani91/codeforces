#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char *argv[])
{
    int i,j=0;
    char str[250],str2[250];
    scanf("%s",str);

    int n=strlen(str);

    for(i=0;i<n;i++) str[i]=tolower(str[i]);

    for(i=0;i<n;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y'){
            str2[j++]='.';
            str2[j++]=str[i];
        }
    }

    str2[j]='\0';
    printf("%s",str2);

    return 0;
}