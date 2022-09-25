#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(int k,vector<ll>v,int n,vector<ll>x){
   // cout<<k<<endl;
    for(int i=1;i<=n;i++){
        if((v[i]^k)<=1024){
        if(!x[v[i]^k]){
        return false;
        }
        }
        else{
           // int x=v[i]^k;
           // cout<<x<<endl;
            //cout<<"false area\n";
            return false;
        }
        
        
        //return true;
    }
    return true;
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    const int num=1024;
    int n=0;
    cin>>n;
    vector<ll>v(num+1,0);
    vector<ll>ans(n+1,0);
    for(int i=1;i<=n;i++){
        //int x;
        cin>>ans[i];
        v[ans[i]]=1;
    }
    int flag=0;
    for(int i=1;i<=num;i++){
        if(check(i,ans,n,v)){
            cout<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<-1<<endl;
    }
}
return 0;
}