#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    int maxi=-1;
    int i;
    int ind;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        if(arr[i]>maxi){
            maxi=arr[i];
            ind=i;
        }
    }
    if(ind==0){
        cout<<arr[ind]-arr[1]<<" "<<arr[2]-(arr[ind]-arr[1])<<" "<<arr[3]-(arr[ind]-arr[1]);
    }
    else if(ind==1){
         cout<<arr[ind]-arr[0]<<" "<<arr[2]-(arr[ind]-arr[0])<<" "<<arr[3]-(arr[ind]-arr[0]);
    }
     else if(ind==2){
         cout<<arr[ind]-arr[0]<<" "<<arr[1]-(arr[ind]-arr[0])<<" "<<arr[3]-(arr[ind]-arr[0]);
    }
     else if(ind==3){
         cout<<arr[ind]-arr[0]<<" "<<arr[1]-(arr[ind]-arr[0])<<" "<<arr[2]-(arr[ind]-arr[0]);
    }

    return 0;
}
