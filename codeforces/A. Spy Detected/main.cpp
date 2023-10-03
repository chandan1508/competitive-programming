
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
        int arr1[n];
        int arr2[n];

        for(int j=0;j<n;j++){
            cin>>arr1[j];
            arr2[j]=arr1[j];
        }
        sort(arr2,arr2+n);
        int spy;
        if(arr2[0]==arr2[1]){
            spy=arr2[n-1];
        }
        else{
            spy=arr2[0];
        }
        for(int k=0;k<n;k++){
            if(arr1[k]==spy){
                cout<<k+1<<endl;
            }
        }
    }
    return 0;
}
