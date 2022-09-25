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
    //ll temp=sqrt(n);
    set<ll>s;
   for(int i=1;;i++){
    int val=n/i;
    if(val<i){
        break;
    }
    s.insert(val);
    s.insert(i);
   }
    s.insert(0);
    cout<<s.size()<<endl;
    for(auto a:s){
        cout<<a<<" ";
    }
    cout<<endl;
}
return 0;
}
