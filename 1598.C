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
    int n;
    cin>>n;
    vector<ll>v(n+1,0);
    map<int,int>m;
    ll sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
        
    }
    if((2*sum)%n!=0){
        cout<<0<<endl;
        
    }
    else{
        ll count=0;
        ll x=((2*sum)/n);
        for(int i=1;i<=n;i++){
            count+=1ll*m[x-v[i]];
            m[v[i]]++;
        }
        cout<<count<<endl;
    }

}
return 0;
}