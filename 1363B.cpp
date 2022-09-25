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
    ll suff=0,suff1=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            suff1++;
        }
        else{
            suff++;
        }
    }
    ll mn=min(suff1,suff);
    ll pref0=0,pref1=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            pref1++;
            suff1--;
        }
        else{
            pref0++;
            suff--;
        }
        //(0)*(1)*
        mn=min(pref1+suff,mn);
        //(1)*(0)*
        mn=min(pref0+suff1,mn);
    }
    cout<<mn<<endl;
}
return 0;
}