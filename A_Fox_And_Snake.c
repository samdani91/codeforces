#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int n,m,i,j;
    scanf("%d %d",&n,&m);

    char str[n+1][m+1];

    for( i=0;i<n;i++){   
        if(i%2==0){
            for( j=0;j<m;j++)
                str[i][j]='#';
        }
        
        else if((i+1)%4==0){
            str[i][0]='#';
            for( j=1;j<m;j++){
                str[i][j]='.';
            }
        }
        else if((i+1)%2==0){
            for( j=0;j<m-1;j++){                
                str[i][j]='.';
            }
            str[i][j]='#';
        }

        
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c",str[i][j]);
        }
        printf("\n");
    }

    return 0;
}