#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n],sum=0;
		for(int i=0;i<n;i++) {
			cin>>arr[i];
			sum=sum+arr[i];
		}
		if(sum%n==0) cout<<sum/n<<endl;
		else cout<<(sum/n)+1<<endl;

	}
}