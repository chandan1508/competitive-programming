#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;

    }
    else{
        int a=n/10;
        int b=n/100*10+n%10;
        int ans=max(a,b);
        cout<<ans;
    }
    return 0;
}