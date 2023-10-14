#include <iostream>

using namespace std;

int main()
{

     int t;
     cin>>t;
     for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        if(a==b && b==c && a==c){
            cout<<"YES"<<endl;
            continue;
        }
        int mini=min(min(a,b),c);
        if(mini==a){
           if(b%a==0 && b!=a && b>a){
                if(b/a==a){
                     cnt+=b/a-1;
                }

           }
           if(c%a==0 && c!=a && c>a){
                if(c/a==a){
                   cnt+=c/a-1;
                }

           }

        }
        else  if(mini==b){
           if(a%b==0 && a!=b && a>b){
                if(a/b==b){
                   cnt+=a/b-1;
                }

           }
           if(c%b==0 && c!=b && c>b){
                if(c/b==b){
                    cnt+=c/b-1;
                }

           }

        }
        else  if(mini==c){
           if(a%c==0 && a!=c && a>c){
                if(a/c==c){
                   cnt+=a/c-1;
                }

           }
           if(b%c==0 && b!=c && b>c){
                if(b/c==c){
                    cnt+=b/c-1;
                }

           }

        }
        if(cnt<=3 && cnt!=0){
                cout<<"YES"<<endl;

            }
            else{
                 cout<<"NO"<<endl;
            }

     }
    return 0;
}
