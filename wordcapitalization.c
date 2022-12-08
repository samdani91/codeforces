#include<stdio.h>

int main()
{

    char word[1001]={};
    gets(word);
    if(word[0]>='a' && word[0]<='z'){
    word[0]=word[0]-32;
    printf(word);
    }else{
        printf(word);
    }
    return 0;
}