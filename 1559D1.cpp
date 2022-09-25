#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define max 1e9

using namespace std;
map<int,int>vpri1;
map<int,int>vsize1;
map<int,int>vrank1;
map<int,int>vpri2;
map<int,int>vsize2;
map<int,int>vrank2;

void makeset(int n){
    for(int i=0;i<n;i++){
        vpri1[i+1]=i+1;
        vrank1[i+1]=0;
        vsize1[i+1]=1;
        vpri2[i+1]=i+1;
        vrank2[i+1]=0;
        vsize2[i+1]=1;
        
        

    }
}
int findset(int x){
    if(vpri1[x]==x)
    return x;
    else{
        return findset(vpri1[x]);

    }
}
void unionset(int x,int y){
    if(findset(x)==findset(y))
    return ;
    int xp=findset(x);
    int yp=findset(y);
    if(vrank1[xp]>vrank1[yp]){
        vpri1[yp]=xp;
        vsize1[xp]+=vsize1[yp];

        
    }
    else{
        vpri1[xp]=yp;
        vsize1[yp]+=vsize1[xp];
        if(vrank1[xp]==vrank1[yp])
        vrank1[yp]++;
    }
}
int findset1(int x){
    if(vpri2[x]==x)
    return x;
    else{
        return findset1(vpri2[x]);

    }
}
void unionset1(int x,int y){
    if(findset1(x)==findset1(y))
    return ;
    int xp=findset1(x);
    int yp=findset1(y);
    if(vrank2[xp]>vrank2[yp]){
        vpri2[yp]=xp;
        vsize2[xp]+=vsize2[yp];

        
    }
    else{
        vpri2[xp]=yp;
        vsize2[yp]+=vsize2[xp];
        if(vrank2[xp]==vrank2[yp])
        vrank2[yp]++;
    }
}
int main(){
    int t;
    //cin>>t;
    
        int n;
        cin>>n;
        vector<vector<int>>v1(n+1,vector<int>(n+1,0));
        vector<vector<int>>v2(n+1,vector<int>(n+1,0));
        int m1,m2;
        cin>>m1>>m2;
        makeset(n);
        for(int i=0;i<m1;i++){
            int x,y;
            cin>>x>>y;
            unionset(x,y);
            
            v1[x][y]=1;
            v1[y][x]=1;
        }
        for(int i=0;i<m2;i++){
            int x,y;
            cin>>x>>y;
            unionset1(x,y);
            v2[x][y]=1;
            v2[y][x]=1;
        }
        vector<pair<int,int>>ans;
        ll count=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(findset(i)!=findset(j) && findset1(i)!=findset1(j)){
                    count++;
                    ans.push_back({i,j});
                    unionset1(i,j);
                    unionset(i,j);
                }
            }
        }
        cout<<count<<endl;
        for (int i = 0; i < ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        
return 0;

    }
