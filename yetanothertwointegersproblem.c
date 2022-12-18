#include<stdio.h>

int main()
{

    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        if(a==b) printf("0\n");
        else if(a<b){
            if((b-a)%10==0) printf("%d\n",(b-a)/10);
            else printf("%d\n",((b-a)/10)+1);
        }else if(a>b){
            if((a-b)%10==0) printf("%d\n",(a-b)/10);
            else printf("%d\n",((a-b)/10)+1);
        }
    }

    return 0;
}