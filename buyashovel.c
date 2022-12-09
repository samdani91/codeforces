#include<stdio.h>

int main()
{

    int k,r,count=1,c;
    scanf("%d %d",&k,&r);
    
    for(int i=1;;i++){
        c=k*i;
        
        if((c%10==0) || (c/10)*10+r == c){
            printf("%d",count);
            break;
        }
        c=k;
        count++;
        

    }

    return 0;
}