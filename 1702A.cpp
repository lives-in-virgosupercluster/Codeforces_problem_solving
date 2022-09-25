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
    ll pow=1;
    while(pow<=n){
        pow*=10;

    }
    cout<<n-pow/10<<endl;
}
return 0;
}