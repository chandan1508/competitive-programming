#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int ct=1;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1]){
            ct++;
           if(ct==7){
            cout<<"YES";
            return 0;
        }
        }
        else{
            ct=1;
        }


    }
    cout<<"NO";
    return 0;
}
