#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        int cnt_1=0;
        int cnt_0=0;
        for(int j=0;j<str.length();j++){
            if(str[j]=='1'){
                cnt_1++;
            }
            else{
                cnt_0++;
            }
        }
            int ans=min(cnt_0,cnt_1);

	if(ans%2)
		cout<<"DA"<<endl;
	else
		cout<<"NET"<<endl;


    }

    return 0;
}
