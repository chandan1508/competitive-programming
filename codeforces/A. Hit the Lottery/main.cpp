#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int bills=0;
    for(int i=0;i<5;i++){
        if(n/100!=0){
            bills+=n/100;
            n=n%100;
        }
        if(n/20!=0){
            bills+=n/20;
            n=n%20;
        }
         if(n/10!=0){
            bills+=n/10;
            n=n%10;
        }
        if(n/5!=0){
            bills+=n/5;
            n=n%5;
        }
        if(n/1!=0){
            bills+=n/1;
            n=n%1;
        }
    }
    cout<<bills;
    return 0;
}
