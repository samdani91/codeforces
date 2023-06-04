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

#define N 1001
int graph[N][N];
int visited[N];

void bfs(int start, int nodes) {
    int queue[N];
    int front = 0, rear = 0;

    
    visited[start] = 1;
    queue[rear++] = start;

    
    while(front != rear) {
        int current = queue[front++];
       
        for(int i = 1; i <= nodes; i++) {
            if(graph[current][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}
int main()
{

    int n,s;
    cin>>n>>s;
    int a[N],b[N];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]==1 && a[j]==1){
                graph[i][j]=1;
                break;
            }
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=i-1;j>=1;j--){
            if(b[i]==1 && b[j]==1){
                graph[i][j]=1;
                break;
            }
        }
    }

    if(a[1]==0) cout<<"NO"<<endl;
    else{
        bfs(a[1],n);
        if(visited[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}