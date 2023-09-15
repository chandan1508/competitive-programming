#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n,i,half,ct,check;
    cin>>n;
    long long arr[n];
    long long sum=0;

    for( i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
     half=sum/2;
     ct=0;
    sort(arr,arr+n);
     check=0;

    for( i=n-1;i>=0;i--){
        check+=arr[i];
        ct++;
        if(check>half){
           break;
        }

    }
    cout<<ct;

    return 0;
}
