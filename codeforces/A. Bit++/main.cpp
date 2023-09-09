#include <iostream>
#include <string.h>

using namespace std;

int main()
{   int num;
int x=0;
     cin>>num;
  string str;
  while(num>0){
    cin>>str;
    if(str[1]=='+'){
        x=x+1;
    }
    else if(str[1]=='-'){
        x=x-1;
    }

    num--;
  }
  cout<<x;
    return 0;
}
