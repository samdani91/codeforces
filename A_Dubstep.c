#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
    char str[201],str2[201];
    scanf("%s",str);
    int size=strlen(str);
    int k=0;

    for(int i=0;i<size;i++){
        if(str[i]=='W'&& str[i+1]=='U'&&str[i+2]=='B'){
            i=i+2;
        }else {
            str2[k++]=str[i];
            if(str[i+1]=='W'&& str[i+2]=='U'&&str[i+3]=='B') str2[k++]=' ';
        }
    }
    str2[k]='\0';

    printf(str2);
    

    return 0;
}