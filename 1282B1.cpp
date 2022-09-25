#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
ll x=t;
t=0;
while(t<x){
   // if(x==1){
    ll n,p,k;
    cin>>n>>p>>k;
   vector<ll>v(n,0);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
   sort(v.begin(),v.end());
if(n%2==0){
    ll numofgoods=0;
    ll tempprice=p;
    for(ll i=1;i<n;i+=2){
        if(v[i]<=p){
p-=v[i];
numofgoods+=2;
        }
        else{
if(i>0){
    if(v[i-1]<=p){
        p-=v[i-1];
        numofgoods++;

    }
}
        }
    }
   // cout<<numofgoods<<endl;
    ll temp=0;
    p=tempprice;
    for(ll i=0;i<n;i+=2){
if(i==0){
    if(v[i]<=p){
        p-=v[i];
        temp++;
    }
}
else{
    if(v[i]<=p){
        p-=v[i];
        temp+=2;
    }
    else {
        if(v[i-1]<=p){
            p-=v[i-1];
            temp++;
        }
    }
}
        
    }
    if(v[n-1]<=p){
        temp++;
    }
    cout<<max(numofgoods,temp)<<endl;
}
else{

    ll sum=0;
    ll sum1=0;
ll temp=p;
    for(ll i=0;i<n;i+=2){
        if(i==0){
            if(p>=v[i]){
p-=v[i];
sum++;
            }
        }
        else{
            if(p>=v[i]){
                p-=v[i];
                sum+=2;
            }
            else{
                if(p>=v[i-1]){
                    p-=v[i-1];
                    sum++;
                }
            }

        }

    }
    p=temp;
    for(ll i=1;i<n;i+=2){
        if(p>=v[i]){
            p-=v[i];
            sum1+=2;
        }
        else{
            if(p>=v[i-1]){
                p-=v[i-1];
                sum1++;
            }
        }
    }
    if(p>=v[n-1]){
        sum1++;
    }
    cout<<max(sum,sum1)<<endl;
}
   // }
    // else{
    //     ll n,p,k;
    //     cin>>n>>p>>k;
    //     vector<ll>v(n,0);
    //     for(ll i=0;i<n;i++){
    //         cin>>v[i];
    //     }
    //     if(t==94){
    //         cout<<p<<endl;
    //         for(ll i=0;i<n;i++){
    //             cout<<v[i]<<" ";
    //         }
    //     }

    // }
t++;

}
return 0;
}