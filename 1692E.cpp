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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    ll pref=0;
    ll suffix=0;
    ll mn=INT_MAX;
    for(ll i=1;i<=n;i++){
        pref+=v[i];
        if(pref==k){
     mn=min(n-i,mn);
     break;
        }
    }
    for(ll i=n;i>=0;i--){
        suffix+=v[i];
        if(suffix==k){
            mn=min(i-1,mn);
            break;
        }
    }
    map<ll,ll>m;
    m[1]=-1;
    ll sum=0;
    ll start=1;
    ll end=0;
    ll mn1=INT_MAX;
queue<ll>q;
    for(ll i=1;i<=n;i++){
        sum+=v[i];
        if(v[i]==1){
            q.push(i);
        }
     
        if(sum>k){
            end=i-1;
mn1=min(mn1,start-1+n-end);
//cout<<start<<endl;
//cout<<end<<endl;
//cout<<mn1<<endl;


if(v[start]==1){
start++;
if(start>q.front()){
    q.pop();
}
}
else{
    start=q.front()+1;
    q.pop();
}
sum--;



        }

    }
    if(sum==k ){
        end=n;
        mn1=min(mn1,start-1+n-end);
    }
    //cout<<mn1<<endl;
    mn=min(mn1,mn);
    if(mn!=INT_MAX){
        cout<<mn<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
return 0;
}