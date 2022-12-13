#include<stdio.h>

int main()
{

    int t,n,min,store,count;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int arr[n];
        min=1000000,store=0,count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(int j=0;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
            }
        }
        for(int j=0;j<n;j++){
            if(min==arr[j]){
                count++;
            }
        }
        //printf("%d %d",min,count);
        printf("%d\n",count*2);

    }



    return 0;
}
