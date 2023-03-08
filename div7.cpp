#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%7==0) cout<<n<<endl;
		else{	
				int rem=n%10;
				int ans=7-(n%7);
				if(rem+ans<10) cout<<n+ans<<endl;
				else cout<<n-(n%7)<<endl;
				
			
		}
	}

}