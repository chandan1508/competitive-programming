#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
               int a,b,c,m;
        cin >> a >> b >> c;
         m=-1;

        if((2*b-c)%a==0 && (2*b-c)>0){
            m=(2*b-c)/a;
        }
        else if((a+c)%(2*b)==0){

            m=(a+c)/(2*b);

        }
        else if((2*b-a)%c==0 && (2*b-a)>0){

            m=(2*b-a)/c;

        }



        if(m==-1){

            cout<<"NO\n";

        }else{

            cout<<"YES\n";

        }
    }
    return 0;
}
