#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4'){
            i+=2;
        }
        else if(str[i]=='1' && str[i+1]=='4'){
            i+=1;
        }
        else if(str[i]=='1'){
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
