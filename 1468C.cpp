#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool cmp (pair<ll,ll> a, pair<ll,ll> b) { 
    if(a.first<b.first){
        return true;
    }
    else if(a.first>b.first){
        return false;
    }
    else{
        if(a.second>b.second){
            return true;
        }
        else{
            return false;
        }
    }
 }
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;

//std::set<int, decltype(&cmp)> s;
set<pair<ll,ll>,decltype(&cmp)>n(cmp);
set<pair<ll,ll>,decltype(&cmp)>pri(cmp);
ll q=1;
vector<ll>elements;
// ll a=1;
// ll b=2;
// ll a1=2;
// ll b1=2;
// n.insert({1,2});
// n.insert({1,3});
// pair<ll,ll>x=*(n.begin());
// cout<<x.first<<endl;
// cout<<x.second<<endl;
while(q<=t){
     //q++;
    ll m;
    ll tp;
    cin>>tp;
    //cin>>m;
   if(tp==1){
    cin>>m;
    elements.push_back(m);
    n.insert({elements.size(),m});
    pri.insert({m,elements.size()});
    
   }
   else if(tp==2){
    pair<ll,ll> x=*(n.begin());
    cout<<x.first<<" ";
    n.erase(x);
    pri.erase({x.second,x.first});

   }
   else{
    pair<ll,ll>x=*(--pri.end());
    cout<<x.second<<" ";
    n.erase({x.second,x.first});
    pri.erase(x);
   }
   q++;
  
    

}
return 0;
}