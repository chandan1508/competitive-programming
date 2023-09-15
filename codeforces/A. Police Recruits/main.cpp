#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=0;
    int a;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==-1 && p==0){
            cnt++;
        }
        else if(a==-1 && p>0){
            p--;
        }
        else{
           p+=a;
        }


    }
    cout<<cnt;
    return 0;
}
