#include <iostream>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<2*k-1;
        }
        else{
                long long m=k-n/2;
            cout<<2*m;
        }
    }
    else{
       if(k<=(n+1)/2){
           cout<<2*k-1;
       }
       else{
        long long m=k-(n+1)/2;
        cout<<2*m;
       }
    }
    return 0;
}
