#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int min(int n,int m){
    if(m>n){
        return n;
    }
    return m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,num=0,na=0,nb=0,nc=0;
        vector<int> v(3,0);
       // ll globala=0,globalc=0,globalb=0;
        cin>>n;
        string s;
        cin>>s;
        ll c=0;
        ll x=9999999;
       for(int i=0;i<n;i++){
            vector<int> v(3,0);
           v[s[i]-'a']++;
           for(int j=i+1;j<min(n,7+i);j++){
               v[s[j]-'a']++;
               if(v[0]>v[1] && v[0]>v[2]){
                   x=min(j-i+1,x);
               }
           }
       }
       if(x==9999999)
       cout<<-1<<"\n";
       else{
           cout<<x<<"\n";
       }
    }
    return 0;
}