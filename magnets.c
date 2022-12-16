#include<stdio.h>

int main()
{

    int n,count=1;
    scanf("%d",&n);
    char magnets[n][3];

    for(int i=0;i<n;i++){
        scanf("%s",magnets[i]);
    }
    for(int i=0;i<n-1;i++){
      if(magnets[i][1]==magnets[i+1][0]) count++;
    }
    
    printf("%d",count);


    return 0;
}