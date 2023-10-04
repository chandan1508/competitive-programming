#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='.'){
            cout<<0;
            i=i+1;
        }
        else if(str[i]=='-'){
            if(str[i+1]=='.'){
                cout<<1;
            }
            else if(str[i+1]=='-'){
                cout<<2;
            }
            i=i+2;
        }
    }
    return 0;
}
