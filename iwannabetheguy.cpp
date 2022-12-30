#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,p,q,count=0;
    int arr[200];
    scanf("%d",&n);
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&q);
    for(int i=p;i<p+q;i++){
        scanf("%d",&arr[i]);
    }
    
    sort(arr,arr+(p+q));

    for(int i=0;i<p+q;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    
    if(count==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";


    return 0;
}