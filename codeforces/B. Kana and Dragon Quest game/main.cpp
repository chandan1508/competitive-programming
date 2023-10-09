#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,n,m;
    for(int i=0;i<t;i++){
        cin>>x>>n>>m;


        if(x<=m*10)
        {
            cout<<"YES"<<endl;
            continue;
        }

        for(int j=0;j<n;j++){

            if(x/2+10<x){
                x=x/2+10;

            }
            else {
                break;
            }

        }
        if(x<=m*10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
