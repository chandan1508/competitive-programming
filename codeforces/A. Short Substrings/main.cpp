#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        int len=str.length();
        cout<<str[0];
        for(int j=1;j<len-2;j=j+2){
            cout<<str[j];
        }
        cout<<str[len-1]<<endl;
    }
    return 0;
}
