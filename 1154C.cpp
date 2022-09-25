#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll a,b,x;
cin>>a>>b>>x;
ll full=min(min(a/3,b/2),x/2);
a-=3*full;
b-=2*full;
x-=2*full;
vector<ll>v;
v.push_back(a);
v.push_back(b);
v.push_back(x);
int days[7]={0,1,2,0,2,1,0};
ll ans=7*full;

for(ll i=0;i<7;i++){
    vector<ll>temp=v;
ll day=i;
ll curr=0;
    while(temp[days[day]]>0){
            curr++;
            temp[days[day]]--;
            day=(day+1)%7;
            

    }
    ans=max(ans,7*full+curr);



}
cout<<ans<<endl;
return 0;
}