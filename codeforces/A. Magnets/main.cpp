#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100000];
    int g=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            g++;
        }
    }
    cout<<g;
    return 0;
}
