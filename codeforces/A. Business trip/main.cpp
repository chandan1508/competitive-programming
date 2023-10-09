#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }
    sort(arr,arr+12);
    int sum=0;
    int cnt=0;
    for(int i=11;i>=0;i--){
        if(sum>=k){

            break;
        }
        else{
             sum+=arr[i];
        cnt++;
        }

    }
    if(sum<k){
        cnt=-1;
    }
    cout<<cnt;
    return 0;
}
