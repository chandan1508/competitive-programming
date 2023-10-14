#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        string x,s;
        cin>>n>>m>>x>>s;
        int cnt=0;
           if(x==s){
            cout<<cnt<<endl;
            continue;
        }

        while(n<m){
            cnt++;
            x=x+x;
            n+=n;

        }
          if(x.find(s) != string::npos){
            cout<<cnt<<endl;
            continue;
        }
        x+=x;
           if(x.find(s) != string::npos){
            cout<<cnt+1<<endl;
           }
           else{
            cout<<-1<<endl;
           }


    }
    return 0;
}
