#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    string s; cin>>s;
    int max=1, n=1;
    for (size_t i=1; i<s.length(); ++i){
        if (s[i]==s[i-1]){
            n ++;
        }else{
            n = 1;
        }if (n>max){
            max = n;
        }
    }cout<<max;
    return 0;
    
}
