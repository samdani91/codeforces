#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{	
		int ans=0;
		cin>>a>>b>>c;
		int max1=max(a,b);
		int max2=max(b,c);
		int max3=max(max1,max2);

		if(a==b && b==c) cout<<ans+1<<" "<<ans+1<<" "<<ans+1<<endl;
		else{

			if(a==max3 && (a!=b&&a!=c)) cout<<ans<<" ";
			else if(a==max3 && (a==b||a==c)) cout<<ans+1<<" ";
			else if(a<max3) cout<<(max3-a)+1<<" ";

			if(b==max3 && (b!=a&&b!=c)) cout<<ans<<" ";
			else if(b==max3 && (b==a||b==c)) cout<<ans+1<<" ";
			else if(b<max3) cout<<(max3-b)+1<<" ";

			if(c==max3 && (c!=a&&c!=b)) cout<<ans<<endl;
			else if(c==max3 && (c==a||c==b)) cout<<ans+1<<endl;
			else if(c<max3) cout<<(max3-c)+1<<endl;
		}

	}
}