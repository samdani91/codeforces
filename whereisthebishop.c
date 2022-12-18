#include<stdio.h>

int main()
{

    int t;
    char str[8][9];
    scanf("%d",&t);

    for(int a=1;a<=t;a++){
        for(int k=0;k<8;k++)
        scanf("%s",str[k]);

        int box1,box2;
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                if(str[i-1][j+1]=='#' && str[i-1][j-1]=='#' && str[i+1][j+1]=='#' && str[i+1][j-1]=='#'){
                    box1=i+1;
                    box2=j+1;
                }
            }
        }
        printf("%d %d\n",box1,box2);


    }


    return 0;
}