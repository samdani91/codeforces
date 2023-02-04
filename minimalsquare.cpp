#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int sum=2*min(a,b);
		if(sum>=max(a,b)){
			cout<<sum*sum<<endl;
		}else if(sum<max(a,b)){
			cout<<max(a,b)*max(a,b)<<endl;
		}
		
	}
}