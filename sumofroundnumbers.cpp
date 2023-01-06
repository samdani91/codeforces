#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        if(n>=1 && n<=9){
            cout<<1<<endl;
            cout<<n<<endl;
        }else if(n==10 || n==20 || n==30 || n==40 ||n==50 || n==60||n==70 || n==80 ||n==90){
            cout<<1<<endl;
            cout<<n<<endl;
        }else if(n>=11 && n<=99){
            int temp=n%10;
            cout<<2<<endl;
            cout<<n-temp<<" "<<temp<<endl;
        }else if(n==100 || n==200 || n==300 || n==400 ||n==500 || n==600||n==700 || n==800 ||n==900){
            cout<<1<<endl;
            cout<<n<<endl;
        }else if(n>=101 && n<=999){
            int mod1=n%100;
            int mod2=(n%100)%10;
            
            if(mod2==0){
                cout<<2<<endl;
                cout<<n-mod1<<" "<<mod1-mod2<<" "<<endl;
            }else if(mod2==mod1){
                cout<<2<<endl;
                cout<<n-mod1<<" "<<mod1<<" "<<endl;
            }else{
                cout<<3<<endl;
                cout<<n-mod1<<" "<<mod1-mod2<<" "<<mod2<<endl;
            }
        }else if(n==1000 || n==2000 || n==3000 || n==4000 ||n==5000 || n==6000||n==7000 || n==8000 ||n==9000||n==10000){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else if(n>=1001 && n<=9999){
            int mod1=n%1000;
            int mod2=(n%1000)%100;
            int mod3=((n%1000)%100)%10;
            if(mod3==0){
                cout<<2<<endl;
                cout<<n-mod1<<" "<<mod1<<" "<<endl;
            }
            else if(mod1==mod2 && mod3!=mod2){
                cout<<3<<endl;
                cout<<n-mod1<<" "<<mod1-mod3<<" "<<mod3<<endl;
            }else if(mod1==mod2 && mod2==mod3){
                cout<<2<<endl;
                cout<<n-mod1<<" "<<mod1<<" "<<endl;
            }else if(mod3-mod2==0){
                cout<<3<<endl;
                cout<<n-mod1<<" "<<mod1-mod2<<" "<<mod3<<endl;
            }
             
            else{
            cout<<4<<endl;
            cout<<n-mod1<<" "<<mod1-mod2<<" "<<mod2-mod3<<" "<<mod3<<endl;
            }
        }
    }


    return 0;
}