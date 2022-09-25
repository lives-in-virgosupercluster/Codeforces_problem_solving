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
    ll coins;
    cin>>coins;
    vector<ll>a(2,0);
    ll u=0;
    while(coins){
if(coins%2==0 && coins%4==0 && coins>4){
    a[u%2]++;
    coins--;
}
else if(coins%2==0){
    a[u%2]+=coins/2;
    coins=coins/2;
}
else{
    a[u%2]++;
    coins--;
}
u++;
    }
    cout<<a[0]<<endl;

}
return 0;
}