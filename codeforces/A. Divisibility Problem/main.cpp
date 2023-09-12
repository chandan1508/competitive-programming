#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a,b;
   for(int i=0;i<n;i++){
       cin>>a>>b;
       int r=a%b;
       if(r==0){
        cout<<0<<endl;

       }

       else{
          cout<<b-r<<endl;
       }
   }
    return 0;
}
