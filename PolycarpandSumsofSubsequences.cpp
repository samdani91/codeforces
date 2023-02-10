#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int>v,v2;
		for(int i=0;i<7;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int maxi=v.back();
		v2.push_back(v[0]);
		v2.push_back(v[1]);
		int third=maxi-v[0]-v[1];
		v2.push_back(third);

		for(int i=0;i<v2.size();i++){
			cout<<v2[i]<<" ";
		}
		cout<<endl;

	}
}