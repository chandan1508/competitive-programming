#include <iostream>

using namespace std;

int main()
{   int n,k;
     cin>>n;
     cin>>k;
    int arr[60];
    int ct=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]!=0){
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
