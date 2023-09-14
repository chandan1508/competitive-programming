#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    int ct=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str[0]=='T'){
            ct+=4;
        }
        if(str[0]=='C'){
            ct+=6;
        }
        if(str[0]=='O'){
            ct+=8;
        }
        if(str[0]=='D'){
            ct+=12;
        }
        if(str[0]=='I'){
            ct+=20;
        }
    }
    cout<<ct;
    return 0;
}
