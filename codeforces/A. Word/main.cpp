#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int lsum=0,usum=0;
    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            usum++;
        }
        else{
            lsum++;
        }
    }
    if(lsum>=usum){
        for(int i=0;i<str.length();i++){
         str[i]=tolower(str[i]);
    }

   }
   else{
              for(int i=0;i<str.length();i++){
         str[i]=toupper(str[i]);
    }
   }
   cout<<str;
    return 0;
}
