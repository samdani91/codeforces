#include<stdio.h>
#include<string.h>

int main()
{
    //int i;
    char s1[101];
    gets(s1);
    int length=strlen(s1);
    int count=0;
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if((s1[i]==s1[j]) && s1[i]!='\0' ){
                s1[j]='\0';
                count++;
            }
        }
    }
    for(int i=0;i<count;i++){
        for(int p=0;p<length;p++){
            if(s1[p]=='\0'){
                for(int j=p;j<length;j++){
                    s1[j]=s1[j+1];
                }
                length--;
            }
        }
    }

   // printf(s1);
   // printf("\n");

    int length2=strlen(s1);
    if(length2%2==0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }


    return 0;
}