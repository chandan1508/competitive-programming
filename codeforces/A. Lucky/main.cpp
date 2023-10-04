#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int cnt=1;
        int sumf=0;
        int suml=0;
        for(int i=0;i<6;i++){
            if(cnt<=3){
                    int l=n%10;
                    n=n/10;
                suml+=l;
                cnt++;
            }
            else{
               int f=n%10;
                    n=n/10;
                sumf+=f;
                cnt++;
            }
        }
        if(suml==sumf){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
