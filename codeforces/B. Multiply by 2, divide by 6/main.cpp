#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int step=0;
        if(n==0){
            cout<<0<<endl;
            continue;
        }

        while(n!=1){
        if(n%3!=0){
           cout<<-1<<endl;
            break;;
        }
        if(n%6==0){
            n=n/6;
        }
        else{
            n=n*2;
        }
        step++;
        }
        if(n==1){
            cout<<step<<endl;
        }
    }
    return 0;
}
