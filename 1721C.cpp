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
    vector<ll>v(n,0);
    vector<ll>v1(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        cin>>v1[i];
    }
    ll bcount=n-1;
    list<ll>temp;
    vector<ll>dmax(n,0);
    vector<ll>dmin(n,0);
    for(ll i=n-1;i>=0;i--){
        while(bcount>=0 && v[i]<=v1[bcount]){
            temp.push_back(v1[bcount]);
            bcount--;
        }
        ll aused=n-i;
        ll bused=n-(bcount+1);
        dmin[i]=temp.back()-v[i];
        dmax[i]=temp.front()-v[i];
        if(aused==bused){
            
            temp.clear();
            //cout<<v[i]<<endl;

        }


    }
    for(ll i=0;i<n;i++){
        cout<<dmin[i]<<" ";
    }
    cout<<endl;
    for(ll i=0;i<n;i++){
        cout<<dmax[i]<<" ";
    }
    cout<<endl;

}
return 0;
}