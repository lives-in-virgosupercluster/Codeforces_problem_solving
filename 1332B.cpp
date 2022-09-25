#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int calc(ll n){
    ll x=ceil(sqrt(n));
    for(ll i=2;i<=x;i++){
        if(n%i==0){
            return i;
        }
    }
    return -1;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    vector<ll>color(n,0);
    ll numcolor=1;
    map<ll,ll>m;

    for(ll i=0;i<n;i++){
        if(v[i]==1){
            m[v[i]]=numcolor;
            color[i]=numcolor;
            numcolor++;
            

        }
        else{
            int num=calc(v[i]);
            if(num==-1){
                m[v[i]]=numcolor;
                color[i]=numcolor;
                numcolor++;
            }
            else{
                if(m[num]==0){
                    m[num]=numcolor;
                    color[i]=numcolor;
                    numcolor++;
                }
                else{
                    color[i]=m[num];
                }
                
            }
        }
    }
    ll mx=-1;
    for(ll i=0;i<n;i++){
mx=max(color[i],mx);
    }
    cout<<mx<<endl;
    for(ll i=0;i<n;i++){
        cout<<color[i]<<" ";
    }
    cout<<endl;
}
return 0;
}