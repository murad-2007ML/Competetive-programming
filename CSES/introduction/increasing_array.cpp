#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);
    int n; cin>>n;
    long long k=0;
    int a; cin>>a;
    for(int i=0;i<n-1;i++){
        int b;cin>>b;
        if(a>b){
            k+=a-b;
        }else{
            a=b;
        }
    }cout<<k<<"\n";
    return 0;
}
