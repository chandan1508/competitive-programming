#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum=0;
        int a;
        for(int i=0;i<n-1;i++){
            cin>>a;
            sum+=a;
        }
       if(sum>0){
          cout<<-sum<<endl;
       }else if(sum<=0){
           cout<<abs(sum)<<endl;
       }
    }
    return 0;
}
