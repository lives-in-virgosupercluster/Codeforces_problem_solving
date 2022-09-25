#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define maxn 999999
using namespace std;
ll n,arr[4*maxn];
bool arr1[4*maxn];
void build(ll v,ll tl,ll tr,ll a[]){
    if(tl>tr)
    return ;
    if(tl==tr){
        arr[v]=0;
        arr1[v]=true;
    }
    else{
        ll tm=(tl+tr)/2;
        build(2*v,tl,tm,a);
        build(2*v+1,tm+1,tr,a);
        arr[v]=0;
        arr1[v]=true;
    }
}
ll sum(ll v,ll l,ll r,ll tl,ll tr){
    if(l>r)
    return 0;
    if(l==tl && r==tr)
    return arr[v];
    ll tm=(tl+tr)/2;
    return sum(2*v,l,min(tm,r),tl,tm)+sum(2*v+1,max(tm+1,l),r,tm+1,tr);
}
bool update(ll v,ll tl ,ll tr,ll l,ll r,ll x){
    if(!arr1[v]){
        return false;
    }
    if(tl==l && r==tr){
        arr[v]=x;
        arr1[v]=false;
    }
    else{
        ll tm=(tl+tr)/2;
        bool ans=true;
        
          ans=  update(2*v, tl, tm, pos, newval);
        
        else
          ans= update(2*v+1,tm+1,tr,pos,newval);
        arr[v]=arr[2*v]+arr[2*v+1];
        arr1[v]=ans;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;

}