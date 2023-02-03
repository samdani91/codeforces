#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum=0,count=0,store=0;
	cin>>n;
	for (int i = 1;store<=n; i++)
	{
		sum=sum+i;
		store=store+sum;
		count++;
		
	}
	cout<<count-1;
}