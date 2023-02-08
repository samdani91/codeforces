#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d,sum;
	cin>>a>>b>>c>>d;
	int min1=min(a,c);
	int min2=min(c,d);
	int final_min=min(min1,min2);
	if(final_min==a){
		sum=(a*256);
		c=c-a;
		d=d-a;

	}else if(final_min==c){
		sum=(c*256);
		a=a-c;
		d=d-c;

		int min3=min(a,b);
		sum=sum+(min3*32);
	}else if(final_min==d){
		sum=(d*256);
		c=c-d;
		a=a-d;

		int min3=min(a,b);
		sum=sum+(min3*32);
	}
	cout<<sum;

}