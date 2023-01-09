#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
    int cnt=0, add=1, sum=0;
    while((sum+add)<=n)
    {
        sum+=add;
        add++;
        cnt++;
    }
    cout<<cnt<<endl;

    }

    return 0;
}