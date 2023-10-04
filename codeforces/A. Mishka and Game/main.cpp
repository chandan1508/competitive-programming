#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arrM[101];
    int arrC[101];
    int winM=0;
    int winC=0;
    int draw=0;

    for(int i=1;i<=n;i++){
        cin>>arrM[i];
        cin>>arrC[i];
        if(arrM[i]>arrC[i]){
            winM++;
        }
        else if(arrM[i]<arrC[i]){
            winC++;
        }
        else{
            draw++;
        }
    }
    if(winM>winC){
        cout<<"Mishka";
    }
    else if(winM<winC){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
