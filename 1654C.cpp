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
    vector<ll>a(n);
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    multiset<ll>p{sum};
    multiset<ll>q{a.begin(),a.end()};
    while(!p.empty()){
        ll x=*(--p.end());
        if(x<(*--q.end())){
            break;
        }
        p.erase(--p.end());
        if(q.find(x)!=q.end()){
            q.erase(q.find(x));
        }
        else{
            p.insert(x/2);
            p.insert((x+1)/2);
        }
    }
    if(q.empty()){
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;
    

}
return 0;
}