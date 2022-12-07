#include<stdio.h>

int main()
{

    char s1[101];
    gets(s1);
    int count=0,count2=0;

    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]>='A' && s1[i]<='Z') count++;
        if(s1[i]>='a' && s1[i]<='z') count2++;
    }
    if(count>count2){
        for(int i=0;s1[i]!='\0';i++){
            if(s1[i]>='a' && s1[i]<='z'){
                s1[i]=s1[i]-32;
            }
        }
        printf(s1);
        
    }else if(count2>=count){
        for(int i=0;s1[i]!='\0';i++){
            if(s1[i]>='A' && s1[i]<='Z'){
                s1[i]=s1[i]+32;
            }
        }
        printf(s1);
    }

    return 0;
}