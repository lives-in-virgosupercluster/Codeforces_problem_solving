#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
vector<vector<ll>>adj;
vector<vector<ll>>ans;
vector<ll>vec;
string c;
int countans=0;
vector<int>dp;
//int bal;
int dfs(int x){
    //vec={0,0};
    int bal;
    if(c[x-1]=='B')
    bal=-1;
    else
    bal=1;

    for(auto a:adj[x]){
        bal+=dfs(a);
    }
    if(bal==0){
        countans++;
    }
    return bal;
    
}
   

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vec.clear();
    adj.clear();
    ans.clear();
    adj.assign(n+1,{});
    dp.clear();
    dp.assign(n+1,0);
    countans=0;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++){
        if(i==1)
        continue;
        int x;
        cin>>v[i];
        adj[v[i]].push_back(i);
        
    }
    cin>>c;
    dfs(1);
    cout<<countans<<endl;


    
}
return 0;
}