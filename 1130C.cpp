#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
struct p{
    int x,y;
    p(int a,int b){
        x=a;
        y=b;
    }
};
vector<p>c,cc;
int u[100][100];
void dfs(p v,vector<string>&ans,int n){
    u[v.x][v.y]=1;
    for(int i=0;i<4;i++){
        if(v.x+dx[i]>=0 && v.x+dx[i]<n &&  v.y+dy[i]>=0 && v.y+dy[i]<n && u[v.x+dx[i]][v.y+dy[i]]==0 ){
            if(ans[v.x+dx[i]][v.y+dy[i]]=='0'){
                c.push_back(p(v.x+dx[i],v.y+dy[i]));
                dfs(p(v.x+dx[i],v.y+dy[i]),ans,n);
            }
        }
    }


}


int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
int r1,c1;
int r2,c2;
cin>>r1>>c1>>r2>>c2;
r1--;
c1--;
c2--;
r2--;
vector<string>ans(n);
for(ll i=0;i<n;i++){
    string s;
    cin>>ans[i];
    
}
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        u[i][j]=0;
    }
}
c.push_back(p(r1,c1));
dfs(p(r1,c1),ans,n);
cc=c;
// for(p a:cc){
//     cout<<a.x<<" "<<a.y<<endl;
// }
c.clear();
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        u[i][j]=0;
    }
}
c.push_back(p(r2,c2));
dfs(p(r2,c2),ans,n);
// for(p b:c){
//     cout<<b.x<<" "<<b.y<<endl;
// }
int mn=1e6;
for(p a:cc){
    for(p b:c){
        mn=min((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y),mn);
        // cout<<b.x<<" "<<b.y<<" "<<a.x<<" "<<a.y<<endl;
        // cout<<mn<<endl;

    }

}
cout<<mn<<endl;

return 0;
}