#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int Cmax=0;
    int inTram=0;
    int a;
    int b;
    for(int i=0;i<n;i++){
          cin>>a>>b;
        inTram=inTram-a+b;
    if(inTram>Cmax){
        Cmax=inTram;
    }
    }
    cout<<Cmax;
    return 0;
}
