#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
ll x=t;

while(t--){
    
    ll n;
    cin>>n;
    set<ll>s;
    map<ll,ll>m;
    for(ll i=1;i<=n;i++){
        s.insert(i);

    }
    int flag=1;
    vector<ll>suffix(n,0);
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    m[v[i]]++;
    if(m[v[i]]>2){
flag=0;

    }
    }
    if(flag){

    for(ll i=n-1;i>=0;i--){
        if(i==n-1){
            suffix[i]=v[i];
        }
        else{
            suffix[i]=suffix[i+1]+v[i];
        }
    }
    vector<pair<ll,ll>>ans;
    
    for(ll i=0;i<n;i++){
        if(s.find(v[i])==s.end()){
            break;
        }
        else{
            s.erase(v[i]);
            if(*(s.begin())-2==i){
                if(suffix[i+1]==(((n-i)-1)*(n-i))/2  ){
                    set<ll>temp;
                    for(ll j=1;j<=(n-i)-1;j++){
                        temp.insert(j);
                    }
                    int sm=0;
                    for(ll j=i+1;j<n;j++){
                        if(temp.find(v[j])==temp.end()){
                            sm=1;
                            //cout<<v[j]<<" here is the fucker"<<endl;
                            break;
                        }
                        else{
                            temp.erase(v[j]);
                        }
                    }
                    //cout<<temp.size()<<endl;
                    if(temp.empty()){
                       // cout<<"yes"<<endl;
                        if(sm==0){
                           // cout<<"no";
                            ans.push_back({i+1,(n-i)-1});
                        }
                    }
                   
                }

            }
        }
    }
    cout<<ans.size()<<endl;
    ll k=ans.size();
    for(auto a:ans){
        cout<<a.first<<" "<<a.second<<endl;
    }
    }

else{
    cout<<0<<endl;
}
    
    
}
return 0;
}