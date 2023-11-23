#include<bits/stdtr1c++.h>
using namespace std;

typedef  long long ll;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<int>v(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%x!=0) cout<<n<<endl;
        else{
            int i=0;
            int j=0;
            ll l=0,r=0;
            while(i<n and v[n-i-1]%x==0) i++;
            while(j<n and v[j]%x==0) j++;

            cout<<n-min(i,j)-1<<endl;
        }
    }

}