#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    //cout<<"t--"<<t<<endl;
    while(t--){
    ll n,k;
    cin>>n>>k;
    
    vector<ll>v;
    for(ll i=1;i<=k;i++){
        if(n%i==0)
            v.push_back(i);
    }
    //ll j=v.size()-1;
    vector<ll> x(k+1,0);
    int flag=0;
    //ll tar=k;
    for(int i=0;i<v.size();i++){
        if(k>v[i]){
      x[v[i]%k]+=1;
        if(x[(k-v[i])%k]>0){
            flag=1;
            cout<<"Yes"<<endl;
            break;
        }
        }
        else{
            break;
        }



    }
    if(!flag){
        cout<<"No"<<endl;
    }
    }
    
    return 0;
}
