#include<stdio.h>

int main()
{

    int mat[5][5],row,col,count1,count2;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1) {
                row=i;
                col=j;
            }
        }
    }
    if(col>2) count1=col-2;
    else if(col<2) count1=2-col;
    else if(col==2) count1=0;

    if(row>2) count2=row-2;
    else if(row<2) count2=2-row;
    else if(row==2) count2=0;

    printf("%d",count1+count2);

    return 0;
}