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
    ll n,m;
    cin>>n>>m;
    vector<ll>worker(n+1,0);
    vector<ll>tasks(m+1,0);
    for(ll i=1;i<=m;i++){
        ll x;
        cin>>x;
        tasks[i]=x;
        worker[x]++;
    }
    multiset<ll>s;
    for(ll i=1;i<=n;i++){
        s.insert(worker[i]);
    }
    ll max=*(--s.end());
    ll tempmax=max-1;
    if(m==1 ){
        cout<<1<<endl;
    }
    else if(n==1){
        cout<<worker[1]<<endl;
    }
    else{
    while(*(s.begin())+2<=*(--s.end())-1){
        //cout<<"max---"<<max<<endl;
        max=*(--s.end());
        ll begin=*(s.begin());
        //cout<<"begin--"<<begin<<endl;
        s.erase(--s.end());
        s.erase(s.begin());
        
        s.insert(begin+2);
        s.insert(max-1);
        tempmax=*(--s.end());

    }
    cout<<*(--s.end())<<endl;
    }
}
return 0;
}