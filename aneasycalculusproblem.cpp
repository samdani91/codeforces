#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{

    int x;
    cin>>x;

    if(x<=-3){
        int result=8-pow((x+4),2);
        cout<<result;
    }else if(x>-3 && x<=2){
        cout<<1-2*x;
    }else{
        int result=pow(x,3)-14*x+17;
        cout<<result;
    }

    return 0;
}