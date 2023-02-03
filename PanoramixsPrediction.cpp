#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n,m,count,idx;
	cin>>n>>m;
	for(int i=n+1;i<=m;i++)
	{	
		count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0) count++;
			
		}
		if(count==2){
			idx=i;
			break;
		}

	}

	if(idx==m) cout<<"YES";		
	else cout<<"NO";

	return 0;
}