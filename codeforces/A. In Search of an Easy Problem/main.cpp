#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans;
    for(int i=0;i<n;i++){
        cin>>ans;
        if(ans==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}
