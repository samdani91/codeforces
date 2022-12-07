#include<stdio.h>
#include<string.h>
int main()
{

    char s1[101];
    gets(s1);
    char s2[101];
    gets(s2);

    strrev(s2);
    int check=strcmp(s1,s2);
    if(check==0)printf("YES");
    else printf("NO");


    return 0;
}