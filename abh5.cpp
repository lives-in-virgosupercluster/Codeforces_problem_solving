#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int ans=0;
string a;
string b;
cin>>a>>b;
map<char,int>m;
map<char,int>mp;
for(ll i=0;i<a.size();i++){
    m[a[i]]++;
    mp[b[i]]++;
}
ans=(m==mp);
for(int i=a.size();i<b.size();i++){
    mp[b[i-a.size()]]--;
    mp[b[i]]++;
    ans+=(m==mp); 
}

cout<<ans<<endl;

return 0;
}