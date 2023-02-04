#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,max=0,sum=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		sum=sum-a+b;
		if(sum>max) max=sum;
	}
	cout<<max;
}