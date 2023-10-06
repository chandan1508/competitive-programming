#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    string num;

    int cal=0;
    for(int i=1;i<5;i++){
        cin>>arr[i];
    }
    cin>>num;
    int len=num.length();
    for(int i=0;i<len;i++){
        if(num[i]=='1'){
           cal+=arr[1];
        }
        else if(num[i]=='2'){
           cal+=arr[2];
        }
        else if(num[i]=='3'){
           cal+=arr[3];
        }
        else if(num[i]=='4'){
           cal+=arr[4];
        }
    }
    cout<<cal;
    return 0;
}
