#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<"NO"<<endl;
        }
        else{
            if(n>=3){
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
