#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int a;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}
