#include<stdio.h>

int main(int argc,char *argv[])
{

    int t;
    scanf("%d",&t);
    char str[8][9];
    while(t--){
        for(int i=0;i<8;i++){
            scanf("%s",str[i]);
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(str[i][j]!='.'){
                    printf("%c",str[i][j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}