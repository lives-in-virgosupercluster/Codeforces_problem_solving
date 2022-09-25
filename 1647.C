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
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    vector<pair<int,int>>ans;
    vector<pair<int,int>>lastans;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // 
    int flag=0;
    if(v[0][0]=='1'){
        cout<<-1<<endl;
    }
    else{

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(v[i][j]=='1'){
                    if(j==0){
                        ans.push_back({i,j+1});
                        lastans.push_back({i+1,j+1});
                    }
                    else{
                        ans.push_back({i+1,j});
                        lastans.push_back({i+1,j+1});
                    }
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<" ";
            cout<<lastans[i].first<<" "<<lastans[i].second<<endl;
        }
    }

}
return 0;
}