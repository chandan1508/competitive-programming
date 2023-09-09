#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    long long moneyRequired=0;
    for(int i=1;i<=w;i++){
        moneyRequired+=i*k;
    }
    if(moneyRequired<=n){
       cout<<0;
       }
       else{
        cout<<moneyRequired-n;
       }

    return 0;
}
