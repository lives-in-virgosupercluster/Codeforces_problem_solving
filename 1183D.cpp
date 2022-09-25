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
    vector<ll>v(n,0);
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
    
    }
    set<ll>s;
    ll ans=0;
    // 
    for(auto it=m.begin();it!=m.end();it++){
        if(s.find(it->second)==s.end()){
            ans+=it->second;
            s.insert(it->second);
        }
        else{
            int num=it->second;
            num--;
            while(s.find(num)!=s.end() && num>0){
                num--;
            }
            if(num>0){
                s.insert(num);
                ans+=num;
            }
        }
    }
    cout<<ans<<endl;
    
}
return 0;
}