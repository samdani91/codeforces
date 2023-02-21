#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    char str[101];
    scanf("%s",str);

    int size=strlen(str);
    int count=0;

    for(int i=0;i<size;i++){
        if(i+1!=size){
            if(str[i]==str[i+1]){
                count++;
                if(count==6)break;
            }else count=0;
        }
    }

    if(count>=6) printf("YES");
    else printf("NO");

    return 0;
}