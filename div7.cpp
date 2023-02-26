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
			if(n<7) cout<<7<<endl;
			else{
				int ans=(n%7);
				int ans2=min(ans,7-ans);

				cout<<n-ans2<<endl;
			}
		}
	}

}