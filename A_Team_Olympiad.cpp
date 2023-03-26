#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = acos(-1.0);
#define  debug(x)              cerr<<#x<< <<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++);
#define  all(a)                 (a).begin(), (a).end();
#define  min3(a,b,c)            min(a,min(b,c));
#define  max3(a,b,c)            max(a,max(b,c));
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));


int main()
{
    int n,w,j=0,k=0,l=0;
    cin>>n;
    int arr[n],count[4]={0};

    for(int &ele:arr) cin>>ele;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int one[count[1]],two[count[2]],three[count[3]];

    for(int i=0;i<n;i++){
        if(arr[i]==1) one[j++]=i+1;
        else if(arr[i]==2) two[k++]=i+1;
        else three[l++]=i+1;
    }

    w=min3(count[1],count[2],count[3]);

    if(w!=0){
        cout<<w<<endl;
        for(int i=0;i<w;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
        }
    }else{
        cout<<w<<endl;
    }
    





    return 0;
}