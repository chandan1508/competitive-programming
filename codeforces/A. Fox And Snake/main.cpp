#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int check=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
        }
        else{
              if(check%2==1) {
                   for(int j=0;j<m;j++){
                    if(j==(m-1)){
                       cout<<"#";
                      }
                    else{
                        cout<<".";
                    }
                }

              }
              else if(check%2==0){
                for(int j=0;j<m;j++){
                    if(j==0){
                       cout<<"#";
                      }
                    else{
                        cout<<".";
                    }
                }
            }
            check++;

        }
        cout<<endl;
    }
    return 0;
}
