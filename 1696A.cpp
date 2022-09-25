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
    ll n,z;
    cin>>n>>z;
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll max=-1;
    for(int i=0;i<n;i++){
        if((v[i]|z) > max){
            max=v[i]|z;

        }
    }
    cout<<max<<endl;
}
return 0;
}