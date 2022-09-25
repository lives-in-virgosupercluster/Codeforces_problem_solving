#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define maxn 999999
using namespace std;
ll n,arr[4*maxn];
int build(ll v,ll tl,ll tr,int a[]){
    
    if(tl==tr){
        arr[v]=a[tl];
       // cout<<"v--"<<v<<endl;
        //cout<<arr[v]<<endl;
        return 0;
    }
    
    else{
        ll tm=(tl+tr)/2;
       ll x= build(2*v,tl,tm,a);
       ll y= build(2*v+1,tm+1,tr,a);
        if(x==0 && y==0){
            arr[v]=arr[2*v]|arr[2*v+1];
           // cout<<"v--"<<v<<endl;
        //cout<<arr[v]<<endl;
            return 1;
        }
        else{
            arr[v]=arr[2*v]^arr[2*v+1];
           // cout<<"v--"<<v<<endl;
        //cout<<arr[v]<<endl;
            return 0;
        }
        
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
ll update(ll v,ll tl ,ll tr,ll pos,ll newval){
    if(tl==tr){
        arr[v]=newval;
        
        return 0;
    }
    else{
        ll tm=(tl+tr)/2;
        ll x;
        if(pos<=tm){
           x= update(2*v, tl, tm, pos, newval);
        }
        else
        x=update(2*v+1,tm+1,tr,pos,newval);
        if(x==0){
        arr[v]=arr[2*v]|arr[2*v+1];
        //cout<<"v--"<<v<<endl;
            //cout<<arr[v]<<endl;
        return 1;
        }
        else{
            arr[v]=arr[2*v]^arr[2*v+1];
            //cout<<"v--"<<v<<endl;
            //cout<<arr[v]<<endl;
            return 0;
        }
    }
}





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll s,m;
    cin>>s;
    
    ll pow=1;
    cin>>m;
    for (ll i = 0; i < s; i++)
    {
        pow*=2;
    }
    
    n=pow;
    int a[pow];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    build(1,0,n-1,a);
   
    ll p, b;
    for (ll i = 0; i < m; i++)
    {
        cin>>p;
        cin>>b;
       // cout<<arr[3]<<endl;
       // cout<<arr[6]<<endl;
        //cout<<arr[7]<<endl;
        update(1,0,n-1,p-1,b);
        cout<<arr[1]<<endl;
        

    }
    
    
    
    
    

    

return 0;
}