#include<stdio.h>

int main()
{

    int n,count=0,check=0;
    scanf("%d",&n);
    char word[n+1];
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        if(word[i]=='A'){
            count++;
        }
        else if(word[i]=='D'){
            check++;
        }
    }
    if(count>check){
        printf("Anton");
    }else if(count<check){
        printf("Danik");
    }else{
        printf("Friendship");
    }

    return 0;
}