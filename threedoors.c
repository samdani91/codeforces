#include<stdio.h>

int main()
{

    int t,k,arr[3],store,count;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        count=0;
        scanf("%d",&k);
        for(int j=0;j<3;j++){
            scanf("%d",&arr[j]);
        }
        if(k==3){
            store=arr[2];
            if(store==0){
                printf("NO\n");
            }else if(store==2){
                if(arr[1]==1) printf("YES\n");
                if(arr[1]==0) printf("NO\n");
            }else if(store==1){
                if(arr[0]==0) printf("NO\n");
                if(arr[0]==2) printf("YES\n");
            }
        }
        if(k==2){
            store=arr[1];
            if(store==0){
                printf("NO\n");
            }else if(store==3){
                if(arr[2]==1) printf("YES\n");
                if(arr[2]==0) printf("NO\n");
            }else if(store==1){
                if(arr[0]==0) printf("NO\n");
                if(arr[0]==3) printf("YES\n");
            }                          
        }
        if(k==1){
            store=arr[0];
            if(store==0){
                printf("NO\n");
            }else if(store==3){
                if(arr[2]==2) printf("YES\n");
                if(arr[2]==0) printf("NO\n");
            }else if(store==2){
                if(arr[1]==0) printf("NO\n");
                if(arr[1]==3) printf("YES\n");
            }                          
        }
    }

    return 0;
}