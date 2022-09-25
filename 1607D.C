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
map<ll,string>m;
ll n;
cin>>n;
vector<ll> v(n+1,0);
vector<pair<ll,char>>vans;
for (ll i = 1; i <= n; i++)
{
    cin>>v[i];
}
for(ll i=1;i<=n;i++){
    char s;
    cin>>s;
    vans.push_back({v[i],s});
    
}
for(int i=1;i<=n;i++){
    v[i]=0;
}
// for(auto i:vans){
//     cout<<i.first<<endl;
//     cout<<i.second<<endl;
// }
ll least=1;
ll max=n;
int flag=0;
vector<ll>l,r;
for(int i=0;i<n;i++){
    if(vans[i].second=='B'){
        l.push_back(vans[i].first);
    }
    else{
        r.push_back(vans[i].first);
    }
}
sort(l.begin(),l.end());
sort(r.begin(),r.end(),greater<int>());
// for(auto i:l){
//     cout<<i<<endl;
// }
for(int i=0;i<l.size();i++){
    if(l[i]<least){
        flag=1;
        break;
    }
    else{
        v[least]=1;
        least++;
    }
}
//cout<<flag<<endl;


if(!flag){
    for (ll i = 0; i < r.size(); i++)
    {
        if(r[i]>max){
            flag=1;
            break;
        }
        else{
            v[max]=1;
            max--;
        }
    }
    
}
if(flag){
    cout<<"NO"<<endl;
}
else if(flag==0){
    cout<<"Yes"<<endl;
}


// for(int i=0;i<n;i++){
//     if(vans[i].second=='B'){
//         if(vans[i].first<least){
//             flag=1;
//             cout<<"NO"<<endl;
//             break;
//         }
//         v[least]=1;
//         least++;
//     }
//     else{
//         if(vans[i].first>max){
//             flag=1;
//             cout<<"NO"<<endl;
//             break;
//         }
//         v[max]=1;
//         max--;
//     }
//     if(max<least){
//         cout<<"yes"<<endl;
//         break;

//     }
//     // cout<<"least--"<<least<<endl;
//     // cout<<"max---"<<max<<endl;
    
    
   
}

}
