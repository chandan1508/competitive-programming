#include <iostream>

using namespace std;

int main()
{    int num;
     cin>>num;
     int a,b,c;
     int ct=0;
     while(num>0){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ct++;
        }
       num--;
     }
     cout<<ct;
    return 0;
}
