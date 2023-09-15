#include <iostream>

using namespace std;

int main()
{
    int n,points;
    cin>>n>>points;
    int maxi=points;
    int mini=points;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        cin>>points;
        if(points>maxi){
            maxi=points;
            cnt++;
        }
        else if(points<mini){
            mini=points;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
