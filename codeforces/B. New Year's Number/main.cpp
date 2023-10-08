#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long r=n%2020;
        long long d=n/2020;
        if(r<=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
