#include <iostream>

using namespace std;

int main()
{

    string str;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
            if(str[i]>=33 && str[i]<=126){
                 if(str[i]=='H'){
            cout<<"YES";
            return 0;
        }
        else if(str[i]=='Q'){
            cout<<"YES";
            return 0;
        }
        else if(str[i]=='9'){
            cout<<"YES";
            return 0;
        }

     }

    }
    cout<<"NO";
    return 0;
}
