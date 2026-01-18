#include <iostream>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string s = "";
    for (int i = 2; i <= n; i += 2) s += to_string(i) + " ";
    for (int i = 1; i <= n; i += 2) s += to_string(i) + " ";
    if ((n == 2) || (n == 3)) s = "NO SOLUTION";
    cout << s;
    return 0;
}
