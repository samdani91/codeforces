#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    char str[101],str2[6]="hello";
    scanf("%s",str);
    int count=0,j=0;

    for(int i=0;i<strlen(str);i++){
        if(str[i]==str2[j]){
            j++;
            count++;
            if(count==5) break;
        }
    }

    if(count==5) printf("YES");
    else printf("NO");

    return 0;
}