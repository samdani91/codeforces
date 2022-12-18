#include<stdio.h>

int main()
{

   int num[3],max1,max2,low;
   for(int i=0;i<3;i++) scanf("%d",&num[i]);
   
   if(num[0]>num[1]){
         max1=num[0];
         max2=num[1];
         low=num[2];
   }else if(num[1]>num[0]){
         max1=num[1];
         max2=num[0];
         low=num[2];
   }
   
   if(num[2]>max1){
      low=max2;
      max2=max1;
      max1=num[2];
   }else if(num[2]>max2 && num[2]<max1){
    low=max2;
    max2=num[2];
   }

   printf("%d",(max1-max2)+(max2-low));


    return 0;
}