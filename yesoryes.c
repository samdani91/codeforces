#include<stdio.h>

int main()
{   int n,count;
    char s1[4];
    scanf("%d",&n);
    for(int j=0;j<n;j++){
    count=0;
    scanf("%s",s1);
        if((s1[0]=='y'|| s1[0]=='Y')){
            count++;
        }
        if((s1[1]=='e'|| s1[1]=='E')){
            count++;
        }
        if((s1[2]=='s'|| s1[2]=='S')){
            count++;
        }
        if(count==3)printf("YES\n");
    else printf("NO\n");
    }


    return 0;
}