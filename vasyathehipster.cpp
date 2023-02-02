#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;

	int store1,store2;
	if(a==b)
	{
		store1=(a+b)/2;
		store2=0;
		cout<<store1<<" "<<store2;
	}
	else if(a>b){
		store1=b;
		store2=(a-b)/2;

		cout<<store1<<" "<<store2;
	}
	else if(b>a){
		store1=a;
		store2=(b-a)/2;

		cout<<store1<<" "<<store2;
	}
	return 0;
}