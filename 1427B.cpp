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
ll k;
cin>>k;
string s;
cin>>s;
ll w=0;

for(ll i=0;i<n;i++){
    if(s[i]=='W'){
        w++;
    }

}
if(w==0){
    cout<<max(2*k-1,0ll)<<endl;
}
else{
    w+=k;
    if(w>=n){
        cout<<2*n-1<<endl;
    }
    else{
    vector<ll>loss;
    ll l=0;
    ll winst=0;
    for(ll j=0;j<n;j++){
        if(s[j]=='W'){
            if(j==0 || s[j-1]=='L'){
                winst++;
            }
        }
        
    }
    for(ll i=0;i<n;i++){
        if(s[i]=='L'){
            l++;

        }
        else{
            if(l!=0)
            loss.push_back(l);
            l=0;
        }
    }
    if(l!=0){
        loss.push_back(l);
    }
    if(s[0]=='L'){
        loss[0]=1e9;
    }
    if(s[n-1]=='L'){
        loss.back()=1e9;
    }
    sort(loss.begin(),loss.end());
    ll tot=0;
    ll i;
    // for(auto a:loss)
    // cout<<a<<endl;
    // cout<<winst<<endl;
    for(i=0;i<loss.size();i++){
        if(tot+loss[i]>k){
            break;
        }
        else{
            tot+=loss[i];
            winst--;
        }
    }
    //ll winst=loss.size()-i;
   // cout<<winst<<endl;
    cout<<2*w-winst<<endl;
}
}
}
return 0;
}