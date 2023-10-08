#include <iostream>

using namespace std;

int main()
{
    char ch[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    string ch1;
    char d;
    cin>>d;
    cin>>ch1;
    if(d=='L'){
        int n=ch1.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<30;j++){
                if(ch1[i]==ch[j]){
                    cout<<ch[j+1];
                    break;
                }
            }
        }
    }
    else{
       int n=ch1.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<30;j++){
                if(ch1[i]==ch[j]){
                    cout<<ch[j-1];
                    break;
                }
            }
        }
    }
    return 0;
}
