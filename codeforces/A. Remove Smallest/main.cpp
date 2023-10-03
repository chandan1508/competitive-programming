#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr,arr+n);
        bool check=true;
        for(int k=0;k<n-1;k++){
            if(arr[k+1]-arr[k]>1){
                cout<<"NO"<<endl;
                check=false;
                break;
            }
        }
            if(check){
                cout<<"YES"<<endl;
            }


    }
    return 0;
}
