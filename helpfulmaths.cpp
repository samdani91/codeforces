#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    string str;
    cin>>str;

    for(int i=0;i<str.size();i=i+2){
        for(int j=0;j<str.size()-1;j=j+2){
            if(str[j]>str[j+2]){
                swap(str[j],str[j+2]);
            }
        }
    }
    cout<<str;

    return 0;
}