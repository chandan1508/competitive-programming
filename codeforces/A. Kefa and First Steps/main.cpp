#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi=1;
    int cnt=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0){
               if(arr[i]>=arr[i-1]){
            cnt++;
            maxi=max(maxi,cnt);
        }

        else{
            cnt=1;
        }
     }

    }


    cout<<maxi;
    return 0;
}
