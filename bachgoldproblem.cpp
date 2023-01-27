#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,j,count;
	cin>>n;
	if(n%2==0){
		cout<<n/2<<endl;
		for(int i=1;i<=n/2;i++){
			cout<<"2"<<" ";
		}
	}
	else{
		count=n-3;
		cout<<(n/2)<<endl;
		for(int i=1;i<=(n-3)/2;i++){
			cout<<"2"<<" ";
		}
		cout<<"3";

	}
}