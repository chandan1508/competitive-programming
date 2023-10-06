#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int ans[4]={0};
    int len=str.length();
    int r=len%4;
    for(int i=0;i<len-r;){
        if(str[i]=='!'){
            int arr[4]={0};
            for(int j=i;j<i+4;j++){
                if(str[j]=='R'){
                    arr[0]++;
                }
                else if(str[j]=='B'){
                    arr[1]++;
                }
                 else if(str[j]=='Y'){
                    arr[2]++;
                }
                 else if(str[j]=='G'){
                    arr[3]++;
                }
            }
            for(int j=0;j<4;j++){
                    if(arr[j]==0){
                       ans[j]++;
                    }

            }
            i=i+3;
        }
        i++;
    }

       if(r!=0){
         int arr[4]={0};

            for(int j=len-4;j<len;j++){
                if(str[j]=='R'){
                    arr[0]++;
                }
                else if(str[j]=='B'){
                    arr[1]++;
                }
                 else if(str[j]=='Y'){
                    arr[2]++;
                }
                 else if(str[j]=='G'){
                    arr[3]++;
                }

            }
            for(int j=0;j<4;j++){
                    if(arr[j]==0){
                       ans[j]++;
                    }

            }
       }




    for(int j=0;j<4;j++){
                cout<<ans[j]<<" ";
            }
    return 0;
}
