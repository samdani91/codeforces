#include<stdio.h>

int main()
{

    int t,sum1,sum2;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char num[7];
        scanf("%s",num);

      sum1=num[0]+num[1]+num[2];
      sum2=num[3]+num[4]+num[5];

      if(sum1==sum2) printf("YES\n");
      else printf("NO\n");
    }

    return 0;
}