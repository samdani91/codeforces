#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	string s2;
	int j=0;
	getline(cin,s1);

	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			s2[j]=s1[i];
			j++;
		}
	}
	sort(s2.begin(),s2.end());
	cout<<s2;
}