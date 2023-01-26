#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long int t,a,b,count;
	cin>>t;
	while(t--){		
		cin>>a>>b;
		if(a%b==0) cout<<"0"<<endl;
		else{
			count=b-(a%b);
			cout<<count<<endl;
		}
	}



	return 0;
}