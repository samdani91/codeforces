#include<stdio.h>

int main()
{

    long long int n,total,rem;
    scanf("%lld",&n);
    
    total=n/100;
    rem=n%100;

    total=total+rem/20;
    rem=rem%20;

    total=total+rem/10;
    rem=rem%10;

    total=total+rem/5;
    rem=rem%5;

    total=total+rem/1;

    printf("%lld",total);



    return 0;
}