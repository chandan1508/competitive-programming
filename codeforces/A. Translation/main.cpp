#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first,second;
    cin>>first>>second;
    for(int i=0,j=second.length()-1;i<first.length();i++,j--){
        if(first[i]!=second[j]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
