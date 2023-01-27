#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		if(n<=2) cout<<"1"<<endl;
		else{
			int store=((n-3)/x)+2;
			cout<<store<<endl;
		}
	}
	return 0;
}