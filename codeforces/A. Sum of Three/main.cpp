#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,y,z;
        cin>>n;
       if(n<=6 ||n==9){
        cout<<"NO"<<endl;
        continue;
       }
       x=n-3;
       y=2;
       z=1;
       if(x%3==0){
            cout<<"YES"<<endl;
        cout<<x-2<<" "<<y+2<<" "<<z<<endl;
       }
       else{
           cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
       }
    }
    return 0;
}
