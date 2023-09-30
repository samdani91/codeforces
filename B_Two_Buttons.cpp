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
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

// const int N=1e5+10;

// vector<ll>g[N];
// bool vis[N];

// int bfs(int a,int b)
// {
//     queue<int>q;
//     q.push(a);q.push(a-1);q.push(2*a);
//     vis[a]=true;

//     while(!q.empty()){
//         int cur_v=q.front();
//         q.pop();
//         if(!vis[child]){
//             q.push()
//         }
//     }

// }
int main()
{

    int a,b;
    cin>>a>>b;

    int ans=0;
    while(b>a){
        if(b%2==0) b/=2;
        else b++;
        ans++;
    }
    ans+= (a-b);
    cout<<ans;
    
    return 0;
}

// void input()
// {
//     int a,b;
//     cin>>a>>b;
//     int v=2*b;
//     int e=2*v;


//     for(int i=1;i<=e;i++){
//         g[a].push_back(a-1);
//         g[a].push_back(2*a);


//     }

// }