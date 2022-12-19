#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    char s1[101],s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    for(int i=0;i<strlen(s1);i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }


    printf("%d",strcmp(s1,s2));


    return 0;
}