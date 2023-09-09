#include <iostream>
#include <string.h>
#include <ctype.h>


using namespace std;

int main()
{
    string first;
    string second;
    cin>>first>>second;
    for(int i=0;i<first.length();i++){
            first[i]=tolower(first[i]);
            second[i]=tolower(second[i]);

            if(first[i]>second[i]){
                cout<<1<<endl;
                return 0;
            }
            else if(first[i]<second[i]){
                cout<<-1<<endl;
                return 0;
            }

    }
    cout<<0<<endl;
    return 0;
}
