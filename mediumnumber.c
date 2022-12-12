#include<stdio.h>

int main()
{

    int t,num[3],max1,max2;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        max1=0,max2=0;
        for(int j=0;j<3;j++){
            scanf("%d",&num[j]);
        }
        if(num[0]>num[1]){
            max1=num[0];
            max2=num[1];
        }
        else if(num[0]<num[1]){
            max1=num[1];
            max2=num[0];
        }
        if(num[2]>max1){
            max2=max1; 
            max1=num[2];

        }
        if(num[2]>max2 && num[2]<max1){
            max2=num[2];
        }
        printf("%d\n",max2);
    }

    return 0;
}