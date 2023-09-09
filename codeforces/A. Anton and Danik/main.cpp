#include <iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
     string str;
     cin>>str;
     int CA=0,CD=0;
     for(int i=0;i<n;i++){
        if(str[i]=='A'){
            CA++;
        }
        else{
            CD++;
        }
     }
     if(CA>CD){
        cout<<"Anton";
     }
     else if(CA<CD){
        cout<<"Danik";
     }
     else{
        cout<<"Friendship";
     }
    return 0;
}
