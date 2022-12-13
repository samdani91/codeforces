#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,t,i=1;
   cin>>n;
   while(i<=n){
    cin>>t;
   string s;
   cin>>s;

   sort(s.begin(),s.end());
   if(s=="Timru") cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   i++;
   }

    return 0;
}