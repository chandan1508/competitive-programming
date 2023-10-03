#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
       int num[n];
        for(int j=0;j<n;j++){

            cin>>num[j];

        }
       sort(num,num+n);
       num[0]++;
        int p=1;

        for(int j=0;j<n;j++){

            p*=num[j];

        }
        cout<<p<<endl;

    }
    return 0;
}






