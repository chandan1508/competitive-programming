#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int s=0;
    int d=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    int k=0;
   while(k<n){
    if(k%2==0){
        s+=max(arr[i],arr[j]);
        if(max(arr[i],arr[j])==arr[i]){
            i++;
        }
        else{
            j--;
        }
    }
    else{
        d+=max(arr[i],arr[j]);
        if(max(arr[i],arr[j])==arr[i]){
            i++;
        }
        else{
            j--;
        }
    }

    k++;
   }
   cout<<s<<" "<<d;
    return 0;
}
