#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int check(ll time,map<ll,ll>workers,ll n){
    ll free_slots=0;
    ll needed_slots=0;
    for(int i=1;i<=n;i++){
        if(workers[i]>=time){
            needed_slots+=workers[i]-time;
        }
        else{
            free_slots+=(time-workers[i])/2;
        }
    }
    if(free_slots>=needed_slots){
        return 1;
    }
    else
    return 0;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    //vector<ll>workers(n+1,0);
    //vector<ll>tasks(m+1,0);
   map<ll,ll>workers;
    ll max=-1;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin>>x;
        workers[x]++;
        if(max<workers[x]){
            max=workers[x];
        }

    }
    
    ll time=0;
    ll max_time=max;
    //cout<<"max--"<<max<<endl;
    while(max_time>time+1){
        ll mid=(max_time+time)/2;
        if(check(mid,workers,n)){
            max_time=mid;
        }
        else{
            time=mid;
        }

    }
    cout<<max_time<<endl;
}
      
return 0;
}