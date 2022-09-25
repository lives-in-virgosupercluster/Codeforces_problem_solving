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
    set<ll>s;
    set<ll>temp;
    map<ll,ll>m;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]=-1;
    }
    int margin=-1;
    for(ll i=0;i<n;i++){
        if(i==0){
            s.insert(v[i]);
            m[v[i]]=i;
        }
        else{
            if(m[v[i]]==-1){
m[v[i]]=i;
            }
            if(s.find(v[i])==s.end()){
                if(m[v[i-1]]<=margin){
                    v[i-1]=0;
                }
               if(v[i-1]>v[i]){
                ans=s.size();
                margin=i-1;
               }
               s.insert(v[i]);
            }
            else{
                if(m[v[i-1]]<=margin){
                    v[i-1]=0;
                }
                if(m[v[i]]<=margin){
                    v[i]=0;
                }
                if(v[i-1]>v[i]){
                    ans=s.size();
                    margin=i;
                }
            }
        }
    }
    cout<<ans<<endl;
    
   
    
}
return 0;
}