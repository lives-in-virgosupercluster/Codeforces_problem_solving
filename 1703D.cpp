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
    vector<string>v(n,"");
    set<string>pre;
    set<string>suff;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if(pre.find(v[i])==pre.end()){
            pre.insert(v[i]);
        }
        if(suff.find(v[i])==suff.end()){
            suff.insert(v[i]);
        }
    }
    string ans="";
    for (ll i = 0; i < n; i++)
    {
        string temp="";
        int flag=0;
        for(ll j=0;j<v[i].length();j++){
            temp+=v[i][j];
            if(pre.find(temp)!=pre.end()){
                string temp2="";

                for(ll k=j+1;k<v[i].length();k++){
                    temp2+=v[i][k];
                }
                if(suff.find(temp2)!=suff.end()){
                    ans+='1';
                    flag=1;
                    break;
                }
            }
        }
        if(!flag){
            ans+='0';
        }
    }
    cout<<ans<<endl;
    
    
}
return 0;
}