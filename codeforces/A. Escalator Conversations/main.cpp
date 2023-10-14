#include <iostream>

using namespace std;

int main()
{   int cas;
    cin>>cas;
    for(int c=0;c<cas;c++){
         int n,m,k,H;
    cin>>n>>m>>k>>H;
    int h[51];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>h[i];
        int hd=abs(H-h[i]);
        if(hd%k==0){
            if(hd/k<m && hd/k!=0){
               cnt++;
            }
        }
    }


    cout<<cnt<<endl;
    }

    return 0;
}
