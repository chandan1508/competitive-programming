#include <iostream>

using namespace std;

int main()
{   int t;
    cin>>t;
    for(int k=0;k<t;k++){
        char arr[10][10];
    int pt=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='X'){
                if(i==0 || i==9 || j==0 || j==9){
                    pt+=1;
                }
                else if(i==1 || i==8 || j==1 || j==8){
                  pt+=2;
                }
                else if(i==2 || i==7 || j==2 || j==7){
                  pt+=3;
                }
                else if(i==3 || i==6 || j==3 || j==6){
                  pt+=4;
                }
                else{
                    pt+=5;
                }

            }
        }
    }
    cout<<pt<<endl;
    }

    return 0;
}
