// Here, we need to remove the outer parenthesis and print inner

#include<bits/stdc++.h>
using namespace std;

string paren(string s){
    int n=s.size();
    string res="";
    if(n==1) return res;
    stack<char>st;
    for(int i=0;i<n;i++){
        if(!st.empty()){
            if(st.top()=='(' && s[i]==')'){
                st.pop();
                if(!st.empty()) res+=s[i];
            }
            else if(st.top()=='(' && s[i]=='('){
                st.push(s[i]);
                res+=s[i];
            }
        }
        else{
            st.push(s[i]);
        }
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    string res=paren(s);
    cout<<res;
    return 0;

}