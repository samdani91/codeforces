#include<stdio.h>

int main()
{

    char num[20],count1=0,count2=0;
    scanf("%s",num);
    
    for(int i=0;num[i]!='\0';i++){
        if(num[i]=='4') count1++;
        else if(num[i]=='7') count2++;

    }
    if(count1+count2==4 || count1+count2==7) printf("YES");
    else printf("NO");


    return 0;
}