#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int arr[150];

    cin>>str;
    int ct=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='+'){
            continue;
        }
        else{
            arr[ct]=str[i]-'0';
        }
        ct++;
    }
    sort(arr,arr+ct);
    for(int i=0;i<ct;i++){
        cout<<arr[i];
        if(i==ct-1){
            break;
        }
        cout<<"+";
    }

    return 0;
}
