#include<stdio.h>

int main(){

     int t,n,dupli;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
          dupli=0;
         scanf("%d",&n);
        int num[n];
        for(int j=0;j<n;j++)
          scanf("%d",&num[j]);
        for(int j=0;j<n;j++){
           for(int k=j+1;k<n;k++){
        
              if(num[j]==num[k]){
                dupli++;
                break;
            
            }
        }
     
        }
        if(dupli%2==0) printf("%d\n",n-dupli);
        else{ 
             printf("%d\n", n-dupli-1);
        }
        
        }
    
     return 0;

}