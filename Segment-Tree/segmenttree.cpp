#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define maxn 999999
using namespace std;
ll n,arr[4*maxn];
void build(ll v,ll tl,ll tr){
    if(tl>tr)
    return ;
    if(tl==tr){
        arr[v]=arr[tl];
    }
    else{
        ll tm=(tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        arr[v]=arr[2*v]+arr[2*v+1];
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
void update(ll v,ll tl ,ll tr,ll pos,ll newval){
    if(tl==tr){
        arr[v]=newval;
    }
    else{
        ll tm=(tl+tr)/2;
        if(pos<=tm){
            update(2*v, tl, tm, pos, newval);
        }
        else
        update(2*v+1,tm+1,tr,pos,newval);
        arr[v]=arr[2*v]+arr[2*v+1];
    }
}





int main(){
    cout<<"enter your elements"<<endl;
    cin>>n;
    for(int i=0;i<=2*n+1;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(1,0,n-1);
    cout<<"elements are-";
    cout<<endl;
    for(int i=0;i<=2*n+1;i++){
        cout<<"vertex are---"<<i<<" element- ";
        cout<<arr[i]<<endl;
    }
    cout<<"answer--"<<endl;
    cout<<sum(1,1,3,0,n-1)<<endl;
update(1,0,n-1,2,2);
cout<<"after updating"<<endl;
cout<<"elements are-";
    cout<<endl;
    for(int i=0;i<=2*n+1;i++){
        cout<<"vertex are---"<<i<<" element- ";
        cout<<arr[i]<<endl;
    }
    cout<<"answer--"<<endl;
    cout<<sum(1,1,3,0,n-1)<<endl;

return 0;
}