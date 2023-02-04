#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink=(k*l)/nl;;
	int lime=c*d;
	int salt=p/np;
	int temp=min(drink,lime);
	int temp2=min(lime,salt);
	int ans=min(temp,temp2);
	cout<<ans/n;

}