#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    int cnt=0;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int a;
        for(int j=0;j<n;j++){
            cin>>a;
            if(a==k){
                cnt++;
            }
        }
        if(cnt>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        cnt=0;
    }
    return 0;
}
