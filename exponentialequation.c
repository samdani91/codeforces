#include<stdio.h>

int main()
{
     int t,n;
    scanf("%d",&t);
    while(t--){
   
        scanf("%d",&n); 
        if(n%2!=0) printf("-1\n");
        else {
            printf("%d %d\n",n/2,1);
        
        
        }
    
    }
    return 0;
}