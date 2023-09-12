#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ct=0;
    for(int i=1;i<=d;i++){
        if(i%k==0){
            ct++;
            continue;
        }
        if(i%l==0){
            ct++;
            continue;
        }
        if(i%m==0){
            ct++;
            continue;
        }
        if(i%n==0){
            ct++;
            continue;
        }
    }
    cout<<ct;

    return 0;
}
