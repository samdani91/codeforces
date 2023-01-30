#include<bits/stdc++.h>
using namespace std;

int main()
{	
	unsigned int t,x,y,n,p,ans;
	cin>>t;
	while(t--){
		cin>>x>>y>>n;
		p=(n-y)/x;
		ans=(p*x)+y;
		cout<<ans<<endl;
		
	}




	return 0;
}