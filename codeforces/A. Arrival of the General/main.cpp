#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    int maxi;
    int mini;

    for(int i=1;i<=n;i++){
            cin>>a;
        if(a>maximum){
            maxi=i;
            maximum=a;
        }
        if(a<=minimum){
            mini=i;
            minimum=a;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1;
    }
    else{
        cout<<(maxi-1)+(n-mini);
    }


    return 0;
}
