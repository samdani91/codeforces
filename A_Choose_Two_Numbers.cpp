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
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

int binary_rec(int arr[],int first,int last,int key);

int main()
{

    int n,m,flag1,flag2;
    cin>>n;
    int arr[n];
    for(int &ele: arr) cin>>ele;
    cin>>m;
    int arr2[m];
    for(int &ele:arr2) cin>>ele;

    sort(arr,arr+n);
    sort(arr2,arr2+m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=arr[i]+arr2[j];
            flag1=binary_rec(arr,0,n,sum);
            flag2=binary_rec(arr2,0,m,sum);

            if(flag1==1||flag2==1) continue;
            else {
                cout<<arr[i]<<" "<<arr2[j];
                break;
            }
        }
        if(flag1==-1 && flag2==-1) break;
    }

    return 0;
}

int binary_rec(int arr[],int first,int last,int key){
    int mid;

    if(first<=last){
        mid=(first+last)/2;

        if(arr[mid]==key) return 1;
        else if(arr[mid]>key) {
            last=mid-1;
            return binary_rec(arr,first,last,key);
        }
        else {
            first=mid+1;
            return binary_rec(arr,first,last,key);
        }
    }
    return -1;
}