#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<ll>row(m);
//vector<vector<ll>>table;
map<ll,vector<ll>>x;
map<ll,vector<ll>>y;
//vector<ll>colors(10e5+1,0);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>row[j];
        //colors[row[j]]=1;
        x[row[j]].push_back(i);
        y[row[j]].push_back(j);


    }
    //table.push_back(row);
}
ll sum=0;
for(auto a:x){
    vector<ll>temp=a.second;
    sort(temp.begin(),temp.end());
    ll s=temp.size();
    vector<ll>prefsum(s+1,0);
    for (ll i = s-1; i >=0; i--)    {
        prefsum[i]+=temp[i]+prefsum[i+1];
    
    }
    for(ll i=0;i<s-1;i++){
        sum+=prefsum[i+1]-(s-i-1)*(temp[i]);
    }
    
}
for(auto a:y){
    vector<ll>temp=a.second;
    sort(temp.begin(),temp.end());
    ll s=temp.size();
    vector<ll>prefsum(s+1,0);
    for (ll i = s-1; i >=0; i--)    {
        prefsum[i]+=temp[i]+prefsum[i+1];
    
    }
    for(ll i=0;i<s-1;i++){
        sum+=prefsum[i+1]-(s-i-1)*(temp[i]);
    }
    
}
cout<<sum<<endl;



return 0;
}