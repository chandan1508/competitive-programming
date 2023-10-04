#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int p;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>p;
        if(k+p<=5){
            cnt++;
        }
    }
    cout<<cnt/3;

    return 0;
}
