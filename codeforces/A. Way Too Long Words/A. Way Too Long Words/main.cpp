#include <iostream>

using namespace std;

int main()
{
    int Snum;
    cin>>Snum;
    string str;
    while(Snum>0){
        cin>>str;
        if(str.length()>10){
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
        Snum--;
    }

    return 0;
}
