#include<bits/stdc++.h>
using namespace std;

void lcmAndGcd(long long A , long long B) {
        int a = A;
        int b = B;
        vector <long long> v(2);
        while(min(a,b) != 0)
        {
            int c = a;
            a = max(a,b) % min(a,b);
            b = min(c,b);
        }
        v[1] = max(a,b);
        
        v[0] = A*B/v[1];
        cout<<"HCF is: "<<v[1];
        cout<<"LCM is: "<<v[0];
    }

int main(){
    long long a,b;
    cin>>a;
    cin>>b;
    lcmAndGcd(a,b);
    return 0;
}
 