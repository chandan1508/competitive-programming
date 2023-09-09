#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int ans=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]){
            ans++;
        }
    }
    if(ans%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
