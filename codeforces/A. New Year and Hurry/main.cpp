#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int rest=240-k;
    int sum=0;
    int cnt=0;
    for(int i=1;i<=n;i++){
        sum=sum+5*i;
        if(sum<=rest){
           cnt++;
        }

    }
    cout<<cnt;
    return 0;
}
