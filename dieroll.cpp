#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,temp1,temp2;
    cin>>a>>b;
    temp1=max(a,b);
    temp1=(6-temp1)+1;
    temp2=6;

    if(temp1==6){
        temp1/=6;
        temp2/=6;
    }
    else if(temp1==4){
        temp1/=2;
        temp2/=2;
    }
    else if(temp1==3){
        temp1/=3;
        temp2/=3;
    }
    else if(temp1==2){
        temp1/=2;
        temp2/=2;
    }
    cout<<temp1<<"/"<<temp2;


    return 0;
}