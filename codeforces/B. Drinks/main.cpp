#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    cin>>n;
    double  sum=0.0;
    int d;
    for(int i=1;i<=n;i++){

            cin>>d;
        sum+=d;
    }

    cout<<fixed<<setprecision(12)<<sum/n;
    return 0;
}
