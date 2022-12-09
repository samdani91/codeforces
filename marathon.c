#include<stdio.h>

int main()
{

    
    int t,a,b,c,d,count;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(b>a && c>a && d>a) {
            count=3;
            printf("%d\n",count);
            continue;
        }
        else if(b>a && c>a && a>d){ 
            count=2;
            printf("%d\n",count);
            continue;
            }
        else if(c>a && d>a && a>b){ 
            count=2;
            printf("%d\n",count);
            continue;
        }
        else if(b>a && d>a && a>c){
             count=2;
             printf("%d\n",count);
             continue;
        }
        else if((b<a && d<a && a<c) || (c<a && d<a && a<b) || (b<a && c<a && a<d)){
            count =1;
            printf("%d\n",count);
            continue;
        }
        else {
            count=0;
            printf("%d\n",count);
            continue;
            }
    }

    return 0;
}