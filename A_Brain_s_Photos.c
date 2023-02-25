#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

    int n,m,count=0;
    scanf("%d %d",&n,&m);
    char str[n][m+2];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&str[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(str[i][j]=='C'||str[i][j]=='M'||str[i][j]=='Y') {
                count=1;
                break;
            }
        }
        if(count==1) break;
       
    }

    if(count==1) printf("#Color");
    else printf("#Black&White");
    

    return 0;
}