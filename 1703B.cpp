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
    vector<ll>v(26,0);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        v[s[i]-'A']++;
        if(v[s[i]-'A']==1){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
    
}
return 0;
}