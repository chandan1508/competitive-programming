#include <iostream>
#include <string>

using namespace std;

int main()
{   int n;
    string str;
    cin>>n;
    cin>>str;
    int ans=0;
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
