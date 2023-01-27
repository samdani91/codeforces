#include<stdio.h>

int main()
{
    int t,n,sum=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        if(n==3){
            sum=0;
            for(int i=0;i<n;i++){
                sum=sum+arr[i];
            }
            if(sum%2==0) printf("NO\n");
            else{
                printf("YES\n");
                printf("1 2 3\n");
            }
        }else{
            for(int i=0;i<n)
        }
    }

    

    return 0;
}