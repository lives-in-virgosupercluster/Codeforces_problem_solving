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
    vector<string>v;

    int n,m;
    cin>>n>>m;
    string a;
    for(int i=0;i<n;i++){
        //for(int j=0;)
        cin>>a;
        v.push_back(a);
        
    }
    vector<int>sum;
    ll sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum1+=v[i][j]-'0';

        }
        sum.push_back(sum1);
    }
    int flag=0;
    for(int i=0;i<sum.size();i++){
        if(sum!=0){
            if(flag){
                
            }
        }
    }
}
return 0;
}