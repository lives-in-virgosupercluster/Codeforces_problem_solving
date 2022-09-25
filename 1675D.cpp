#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
vector<int>vec;
vector<vector<int>>ans;
vector<vector<int>>adj;
void dfs(int x){
    bool done=false;
    for(auto a:adj[x]){
        if(!done){
            vec.push_back(a);
            dfs(a);
            done=true;
        }
        else{
            vec={a};
            dfs(a);
        }
    }
    if(adj[x].size()==0){
        ans.push_back(vec);
    }
}


int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    //vector<int>leafs(n+1,0);
    vector<int>parents(n+1,0);
    int root;
    ans.clear();
    adj.clear();
    vec.clear();
    adj.assign(n+1,{});
    for(int i=1;i<=n;i++){
        cin>>parents[i];
        if(parents[i]==i)
        root=i;
        else
        adj[parents[i]].push_back(i);
    }
    vec={root};
    dfs(root);
    cout<<ans.size()<<endl;
    for(auto a:ans){
        cout<<a.size()<<endl;
        for(auto y:a){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    



    

}
return 0;
}