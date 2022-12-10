#include<stdio.h>
#include<string.h>

int main()
{

    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
       if(i%2==0){
        printf("I love that ");
       }else{
        printf("I hate that ");
       }
    }
    if(n%2==0){
      printf("I love it\n");
    }else{
      printf("I hate it\n");
    }

    return 0;
}