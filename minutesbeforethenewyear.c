#include<stdio.h>

int main()
{

    int t,h,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&h,&m);
        if(h==0 && m==0) printf("0\n");
        else if(h==23){
            printf("%d\n",60-m);
        }else if(h<23){
            printf("%d\n",((23-h)*60)+(60-m));
        }
    }

    return 0;
}
