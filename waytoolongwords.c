#include<stdio.h>
#include<string.h>

int main()
{
     int n,length;
    scanf("%d",&n);
    char name[n][101];
    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
        length=strlen(name[i]);
        if(length>10){
            printf("%c%d%c\n",name[i][0],length-2,name[i][length-1]);
        }else{
            printf("%s\n",name[i]);
        }
    }



    return 0;
}