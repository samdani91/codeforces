#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


const int N=10000;

vector<bool>isPrime(N,1);
vector<int>hp(N,0);

int main()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]){
            hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
            }
        }
    }

    int n;
    cin>>n;

    vector<int>prime_factors;
    while(n>1){
        int pf=hp[n];
        while(n%pf==0){
            n/=pf;
            prime_factors.push_back(pf);
        }
    }
    sort(prime_factors.begin(),prime_factors.end());
    for(int i=0;i<prime_factors.size()-1;i++) cout<<prime_factors[i]<<"*";
    cout<<prime_factors[prime_factors.size()-1];

    return 0;
}