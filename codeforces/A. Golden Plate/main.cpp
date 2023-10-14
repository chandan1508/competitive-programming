#include <iostream>

using namespace std;

int main()
{
    int w,h,k;
    cin>>w>>h>>k;
    int cnt=0;
    while(k>0){
        int c=h*2+(w-2)*2;
        cnt+=c;
        w-=4;
        h-=4;
        k--;
      if(w<=0 || h<=0){
            break;
        }
    }
    cout<<cnt;
    return 0;
}
