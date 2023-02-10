#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,val;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int count=1;
		for (int i = 0; i < n; ++i)
		{
			
			if(i+1!=n){
				if(arr[i]==arr[i+1]) count++;
				else count=1;
			}
			if(count==3) {
				val=arr[i];
				break;
			}
			
		}
		if(count==3) cout<<val<<endl;
		else cout<<-1<<endl;
	}
}