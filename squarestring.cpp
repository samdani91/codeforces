#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,j;
    cin>>n;
    string s1,s2;
    while(n--){
        j=0;
    cin>>s1;
    int length=s1.size();
    if(length%2!=0) cout<<"NO"<<endl;
    else{
        for(i=length/2;s1[i]!='\0';i++){
            s2[j]=s1[i];
            s1[i]='\0';
            j++;
        }
        s2[j]='\0';
        //cout<<s1<<endl;
        //cout<<s2<<endl;
        int check=s1.compare(s2);
        if(check==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    }
    return 0;
}