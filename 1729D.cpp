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
    vector<ll>x(n,0);
    vector<ll>y(n,0);
    vector<ll>diff(n,0);
    for(ll i=0;i<n;i++)
    cin>>x[i];
    for(ll i=0;i<n;i++)
    cin>>y[i];
    for(ll i=0;i<n;i++){
diff[i]=x[i]-y[i];
    }
    sort(diff.begin(),diff.end());
    ll start=0;
    ll end=n-1;
    ll days=0;
    while( end>start){
        if(diff[start]+diff[end]<=0){
            start++;
            end--;
            days++;
        }
        else{
            end--;
        }

    }
    cout<<days<<endl;

}
return 0;
}