#include <iostream>

using namespace std;

int main()
{
    int t;
    int n,a,b;
    cin>>t;

    for(int i=0;i<t;i++){

        cin>>n>>a>>b;
        char ch[]="abcdefghijklmnopqrstuvwxyz";
        string str;
        for(int j=0;j<b;j++){
            str[j]=ch[j];
        }
        int k=0;
        for(int j=0;j<n;j++){
            cout<<str[k];
            k++;
            if(k==b){
                k=0;
            }
        }
        cout<<endl;

    }
    return 0;
}
