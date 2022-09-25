#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define maxn 999999
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
    ll n,c,q;
    cin>>n>>c>>q;
    string b="1";
    string a;
    cin>>a;
    a=b+a;
    //cout<<a<<endl;
    vector<ll>len(c+1,0);
    len[0]=n;
    vector<ll>r(c+1,0);
    vector<ll>l(c+1,0);
    for (ll i = 1; i<=c; i++)
    {
        ll x,y;
        cin>>x>>y;
        l[i]=x;
        r[i]=y;
        len[i]=len[i-1]+(y-x+1);



    }
    while(q--){
        ll k;
        cin>>k;
        ll i=c;
        while(i!=0){
            if(len[i-1]>=k){
                i--;
            }
            else{
                k=k-len[i-1];
                k=l[i]+k-1;
                i--;
            }
            
        }
        
        cout<<a[k]<<endl;
    }
    
    
    }
    
    
  

return 0;
}
