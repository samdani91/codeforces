#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,b,count=0;
	cin>>n>>m;
	int a_max=sqrt(n);
	for(int a=0;a<=a_max;a++){
		b=n-(a*a);
		if((a+(b*b))==m) count++;
	}
	cout<<count; 
}