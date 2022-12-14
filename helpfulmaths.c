#include<stdio.h>
#include<string.h>
int main()
{

    char str[101];
    char temp;
    scanf("%s",str);
    int length=strlen(str);
    
    for(int i=0;i<length;i=i+2){
        for(int j=0;j<length-1;j=j+2){
            if(str[j]>str[j+2]){
                temp=str[j];
                str[j]=str[j+2];
                str[j+2]=temp;
            }
        }
    }
    printf(str);

    return 0;
}