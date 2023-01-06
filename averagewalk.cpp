#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,count=0;
    cin>>x;

    if(x<215) cout<<15;
    else if(x>=215  && x<1000){
        for(int i=1;;i++){
            int store=x*i;
            count++;
            if(store>=3000 && count<=15){
                cout<<count;
                break;
            }
        }
    }
    else if(x>=1000 && x<1500) cout<<3;
    else if(x>=1500 && x<2000) cout<<2;
    else if(x>=2000 && x<=2999) cout<<2;
    else if(x==3000) cout<<1;
    

    return 0;
}