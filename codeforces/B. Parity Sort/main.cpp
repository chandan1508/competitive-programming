#include <iostream>

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
            cin>>arr[i];
        }
        int j=0;
        int k=n-1;
        while(j<=k){
            if(arr[j]<arr[k]){
                if(arr[j]%2==0 && arr[k]%2==0){
                    swap(arr[j],arr[k]);
                }
            }
        }
    }
    return 0;
}
