#include<stdio.h>

int main()
{
    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
       scanf("%d %d",&a,&b);
        if(a==b) printf("0\n");
        else if(a>b && (a-b)%2==0 || b>a && (b-a)%2!=0){
                 printf("1\n");
        }else {
                 printf("2\n");
        }
    }
    return 0;
}   