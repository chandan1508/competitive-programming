#include <iostream>

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=9;i++){
        int p=k*i;
        if(p%10==0 || p%10==r){
            cout<<i;
            break;
        }
    }
    return 0;
}
