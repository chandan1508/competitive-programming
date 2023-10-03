#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t1=(l*k)/nl;
    int t2= c*d;
    int t3= p/np;
    int ans1=min(t1,t2);
    int ans2=min(ans1,t3);
    cout<<ans2/n;
    return 0;
}
