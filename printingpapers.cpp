#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,count=0;
	cin>>n;
	if(n==1) cout<<"1";
	else{
		for(int i=1;pow(2,i)<=n;i++){
			count++;
		}
		cout<<pow(2,count);

	}
	return 0;
}