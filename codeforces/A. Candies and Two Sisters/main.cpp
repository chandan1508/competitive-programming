#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double c;
    for(int i=0;i<n;i++){
        cin>>c;
        int ans=ceil((c/2)-1);
        cout<<ans<<endl;
    }
    return 0;
}
