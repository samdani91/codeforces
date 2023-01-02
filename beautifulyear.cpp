#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin>>year;

    for(;;){
        year++;
        int a=year/1000;
        int b=(year%1000)/100;
        int c=((year%1000)%100)/10;
        int d=((year%1000)%100)%10;
        
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<year;
            break;
        }
    }

    return 0;
}