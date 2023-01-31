#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,n,count;
	cin>>t;
	while(t--)
	{	
		count=0;
		cin>>a>>b>>n;
		while(1){
			if(a>n||b>n) break;
			count++;
			if(a<b) a=a+b;
			else b=b+a;
		}
		cout<<count<<endl;

	}
}