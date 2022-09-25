#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    map<char,ll>m;
    char r='R';
    char sc='S';
    char p='P';

    for(ll i=0;i<s.length();i++){
        m[s[i]]++;
        

    }
    if(m[p]>=m[r] && m[p]>=m[sc]){
        string res="";
        for(ll i=0;i<s.length();i++){
            res+="S";
        }
        cout<<res<<endl;
    }
    else if(m[sc]>=m[p] && m[sc]>=m[r]){
        string res="";
        for(ll i=0;i<s.length();i++){
            res+="R";
        }
        cout<<res<<endl;
    }
    else{
        string res="";
        for(ll i=0;i<s.length();i++){
            res+="P";
        }
        cout<<res<<endl;
        
    }
    
}
return 0;
}