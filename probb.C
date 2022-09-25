#include<bits/stdc++.h>

using namespace std;
int max(int n,int m){
    if(n>m){
        return n;
    }
    return m;
}
int main(){
    int t;
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        vector<int>ans(n,0);
        int min=10e8;
        int index=0;
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            cin>>v[i].second;
            


    }
    int ma=-1;
    for(int i=0;i<n;i++){
        ma=-1;
        for(int j=0;j<n;j++){
            if(i!=j && v[i].first==v[j].first && v[j].second<v[i].second){
                ma=max(v[j].second,ma);

            }
        }
        if(ma==-1){
            ans[i]=v[i].first;
        }
        else
        ans[i]=ma+1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<" "<<ans[i]<<"\n";
    }
}
return 0;
}