#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    
    int ans=INT32_MAX;
    
    int idx=1,sum=0,i,j,x=0;

    for(i=0;i<k;i++) {
        sum+=b[i];
    }

    if(sum<ans){
        ans=sum;
        idx=x+1;
    }
    
    for(i=k;i<n;i++){
        
        sum-=b[x++];
        sum+=b[i];

        if(sum<ans){
            ans=sum;
            idx=x+1;
        }
    }
    
    cout << idx << endl;
    
    return 0;
}