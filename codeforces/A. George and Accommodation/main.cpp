#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int j,q;
    int ct=0;
    for(int i=0;i<n;i++){
        cin>>j>>q;
        if(q-j>=2){
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
