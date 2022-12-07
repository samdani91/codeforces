#include<stdio.h>

int main()
{

    int x;
    scanf("%d",&x);

    if(x%5==0){
        printf("%d",x/5);
    }else{
        int a=x/5;
        int b=x%5;
        if(b==4) printf("%d",a+1);
        if(b==3) printf()
        int c=b/4;
        int d=x%4;
        int e=d/3;
        int f=d%3;
        int g=f/2;
        int h=f%2;
        int total=a+c+e+g+h;
        printf("%d",total);
    }

    return 0;
}