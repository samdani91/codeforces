#include<bits/stdc++.h>
using namespace std;

int main()
{
    //gym
    int n,k,count;
    cin>>n>>k;
    int arr[n],copy[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    while(k--){
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    copy[i]=count;
                }
            }

        }
        for(int i=0;i<n;i++) arr[i]=copy[i];
    }
    for(int i=0;i<n;i++) cout<<copy[i]<<" ";

    return 0;
}