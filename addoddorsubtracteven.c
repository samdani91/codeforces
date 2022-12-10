#include<stdio.h>

int main()
{

    int t,a,b,count=0,odd=1,even=2;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        count=0;
        scanf("%d %d",&a,&b);
if(a>0){
        if(a==b){
            printf("0\n");
        }else if((a<b)&&(b-a)==2){
            printf("2\n");
        }
        else if(a<b){
            for(int j=1;a!=b;j++){
                while(a<b){
            a=a+odd;
                }
            count++;
            if(a==b){
                printf("%d\n",count);
            }
            }
        }else if(a>b){
            for(int j=1;a!=b;j++){
                while(a>b){
            a=a-even;
                }
            count++;
             if(a==b){
                printf("%d\n",count);
            }else if(a<b){
                a=a+odd;
                count++;
                printf("%d\n",count);
            }
            }
        }
    }
}
    return 0;
}