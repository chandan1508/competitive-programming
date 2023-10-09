#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ct0=0,ct1=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            ct1++;
        }
        else{
            ct0++;
        }
    }
    cout<<abs(ct1-ct0);
    return 0;
}
