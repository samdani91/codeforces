#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,a,b,c,n,total;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		total=a+b+c+n;
		if(total%3!=0) cout<<"NO"<<endl;
		else if(a>(total/3)||b>(total/3)||c>(total/3)) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		
	}
}