#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;
    int s=0;
    while (n>0){
        n /= 5;
        s += n;
    }
    cout<<s<<endl;
    return 0;
}
