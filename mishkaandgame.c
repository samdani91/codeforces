#include<stdio.h>

int main()
{

    int n,mishka=0,chris=0,draw=0;
    scanf("%d",&n);
    int num[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&num[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        if(num[i][0]>num[i][1]) mishka++;
        else if(num[i][0]<num[i][1]) chris++;
        else if(num[i][0]==num[i][1]) draw++;
    }
    if(mishka==chris) printf("Friendship is magic!^^");
    else if(mishka>chris) printf("Mishka");
    else printf("Chris");
    return 0;
}