#include <iostream>
#include <string>
#include <ctype.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;

        if((str[0]=='Y' || str[0]=='y') && (str[1]=='E' || str[1]=='e') && (str[2]=='S' || str[2]=='s')){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
