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
    ll n;
    cin>>n;
    string s;
    cin>>s;
int flag=0;
    for(ll i=0;i<n;i++){
        if(s[i]!='9'){
            
flag=1;
        }
    }
    if(flag==1){
        string temp="";
        for(ll i=0;i<n;i++){
temp+="9";
        }
        string ans="";
        for(ll i=0;i<n;i++){
            ll target=temp[i]-s[i];
            ans+=to_string(target);

        }
        cout<<ans<<endl;
    }
    else{
        string temp="";
        for(ll i=0;i<n;i++){
            if(i==n-1){
                temp+="2";
            }
            else{
                temp+="1";
            }

        }
        cout<<temp<<endl;
    }
}
return 0;
}