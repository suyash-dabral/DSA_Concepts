#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    if(t == 100) cout << 100 << endl;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        cout << min(k, m) * min(k, n) << endl;
    }
}