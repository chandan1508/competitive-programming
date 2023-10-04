#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
            int arr[4];
            int cnt=0;
            for(int i=0;i<4;i++){
                cin>>arr[i];
            }
            if(arr[1]>arr[0]){
                cnt++;
            }
            if(arr[2]>arr[0]){
                cnt++;
            }
            if(arr[3]>arr[0]){
                cnt++;
            }
          cout<<cnt<<endl;
    }
    return 0;
}
