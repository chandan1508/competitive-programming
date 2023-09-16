#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int num;
        cin>>num;
        int arr[6];
        int total=0,m=1;
        for(int i=1;i<6;i++){
            arr[i]=num%10;
            num=num/10;
            if(arr[i]!=0){
                total++;
            }

        }
        cout<<total<<endl;
        for(int i=1;i<6;i++){
            if(arr[i]!=0){
                cout<<arr[i]*m<<" ";
            }
            m=m*10;
        }
        cout<<endl;
    }
    return 0;
}
