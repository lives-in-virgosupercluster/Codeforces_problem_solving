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
    double ans=(1.0)/(tan(asin(1)/n));
    cout<<setprecision(7);
    
    cout<<ans<<endl;
}
return 0;
}