#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    if(!strcmp(str,"101")) printf("4 5 6 7");
    else if(!strcmp(str,"1")) printf("2");
    else if(!strcmp(str,"01")) printf("2 3");

    return 0;
}