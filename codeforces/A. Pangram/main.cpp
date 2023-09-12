#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int arr[150]={0};
    if(n<26){
        cout<<"NO";
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            int a=tolower(str[i]);
            arr[a]=1;
        }
        for(int i=97;i<=122;i++){
            if(arr[i]==0){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}
