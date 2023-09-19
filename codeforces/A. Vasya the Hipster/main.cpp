#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" ";
    int t=abs(a-b);
    cout<<t/2;
    return 0;
}
