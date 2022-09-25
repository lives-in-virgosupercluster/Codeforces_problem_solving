#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>weaker(n+1,0);
vector<ll>edges(n+1,0);

for (ll i = 0; i < m; i++)

{
    ll x,y;
    cin>>x;
    cin>>y;
   edges[x]++;
   edges[y]++;
   if(x>y){
    weaker[x]++;
   }
   else{
    weaker[y]++;
   }
}
ll ans=0;
for(ll i=1;i<=n;i++){
    if(weaker[i]==edges[i]){
        ans++;
    }
}
ll q;
cin>>q;
vector<ll>tempw=weaker;
vector<ll>edgesw=edges;
ll tempans=ans;
for (ll i = 0; i < q; i++)
{
    ll t;
    cin>>t;
    
    ll x,y;
    if(t==1){
        cin>>x>>y;
        //temp[min(x,y)]++;
        //if(temp[min(x,y)]==1){
           // s.insert(min(x,y));
        //}
        edges[x]++;
        edges[y]++;
        if(x>y){
            weaker[x]++;
            if(weaker[y]==edges[y]-1){
                tempans--;
            }
        }
        else{
            weaker[y]++;
            if(weaker[x]==edges[x]-1){
                tempans--;
            }
        }
        
        
            
        
    }
    else if(t==2){
        cin>>x>>y;
        edges[x]--;
        edges[y]--;
        if(x>y){
            weaker[x]--;
            if(weaker[y]==edges[y]){
                tempans++;
            }
            
        }
        else{
            weaker[y]--;
            if(weaker[x]==edges[x]){
                tempans++;
            }
        }

    }
    else{
        //ll ans=1;
        //cout<<n-s.size()<<endl;
        //cout<<ans<<endl;
        cout<<tempans<<endl;
        
        
    }//h
}


return 0;
}