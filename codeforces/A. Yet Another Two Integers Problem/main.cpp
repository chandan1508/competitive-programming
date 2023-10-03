#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a>b){
           int rem=a-b;
           if(rem%10==0){
            cout<<rem/10<<endl;
           }
           else{
            cout<<rem/10+1<<endl;
           }
        }
        else{
           int rem=b-a;
           if(rem%10==0){
            cout<<rem/10<<endl;
           }
           else{
            cout<<rem/10+1<<endl;
           }
        }
    }
    return 0;
}
