#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int ans=0;

   for(int i=5;i>0;i--){
    ans+=n/i;
    n=n%i;
   }
   cout<<ans;
    return 0;
}
