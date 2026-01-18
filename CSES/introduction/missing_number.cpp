#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    long long n; cin>>n;
    int s= n*(n+1)/2;
    int k=0;
    for (int i=0;i<n-1;i++){
        int a; cin>>a;
        k += a;
    }cout<< s-k << endl;
    return 0;
}
