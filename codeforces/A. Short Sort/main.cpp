#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str[0]=='a'){
            cnt++;
        }
        if(str[1]=='b'){
            cnt++;
        }
        if(str[2]=='c'){
            cnt++;
        }
        if(cnt==1 || cnt==3){
            cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl;
        }
        cnt=0;

    }
    return 0;
}
