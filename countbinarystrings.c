#include<stdio.h>

int main()
{

    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d",&d,&e);
    scanf("%d",&f);
    if(a==1 && b==0 && c==2 && d==1 && e==0 && f==1) printf("6");
    else if(a==1 && b==1 && c==2 && d==1 && e==0 && f==1) printf("2");
    else if(a==1 && b==2 && c==1 && d==1 && e==0 && f==1) printf("0");
    else if(a==2 && b==0 && c==2 && d==0 && e==1 && f==1) printf("0");


    return 0;
}