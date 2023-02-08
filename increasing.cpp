#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		count=0;
		for (int i = 0; i < n; ++i)
		{	
			if(i+1!=n){
				if(arr[i]==arr[i+1]){
					count=1;
					break;
				}
			}
		}
		if(count==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}