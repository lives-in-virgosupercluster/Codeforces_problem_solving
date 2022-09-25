#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    pair<int,int>ans;
    vector<ll>a(n,0);
    map<int,int>m;
    vector<ll>sol;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a.begin(),a.end());
    for(auto x:m){
        if(x.second>=k){
            sol.push_back(x.first);
        }
    }
    if(sol.size()==0)
    cout<<-1<<endl;
    else{
    int size=0;
    pair<int,int>ans;
    ans={sol[0],sol[0]};
    int l=sol[0];

    for(int i=1;i<sol.size();i++){
        if(sol[i-1]==sol[i]-1){
            if(sol[i]-l>size){
                size=sol[i]-l;
                ans={l,sol[i]};
                
            }

        }
        else{
            l=sol[i];
        }
    

    }
    cout<<ans.first<<" "<<ans.second<<endl;
    }
}

}