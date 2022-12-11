#include<stdio.h>

int main()
{

    int t,skill[4],fair[2],max1,max2;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
         for(int j=0;j<4;j++){
            scanf("%d",&skill[j]);
         }
            if(skill[0]>skill[1]){
                max1=skill[0];
                max2=skill[1];
            }else if(skill[0]<skill[1]){
                max1=skill[1];
                max2=skill[0];
            }
         for(int m=2;m<4;m++){
            if(skill[m]>max1){
                max2=max1;
                max1=skill[m];
            }else if(skill[m]>max2 && skill[m]<max1){
                max2=skill[m];
            }
         }
         if(skill[0]>skill[1]) fair[0]=skill[0];
         else if(skill[0]<skill[1]) fair[0]=skill[1];

         if(skill[2]>skill[3]) fair[1]=skill[2];
         else if(skill[2]<skill[3]) fair[1]=skill[3];

         if((fair[0]==max1 || fair[0]==max2) && (fair[1]==max1 || fair[1]==max2)){
            printf("YES\n");
         }else printf("NO\n");

    }

    return 0;
}