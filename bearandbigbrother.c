#include<stdio.h>

int main()
{

    int l,b,lw=0,bw=0,count=0;
    scanf("%d %d",&l,&b);
        if(l==b) {
           printf("1");
        
        }
        else if(l<b){
        for(;;){
        count++;
        l=l*3;
        b=b*2;
        if(l>b){
            printf("%d",count);
            break;
        }
        }
        }

    return 0;
}