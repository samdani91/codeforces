#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for (int i = 0; i <n;++i)
		{
			arr[i]=i+1;
		}
		for (int i = 0; i < n-1; ++i)
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
}