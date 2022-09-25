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
    int n;
    cin>>n;
    vector<ll>v(n,0);
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<vector<ll>>vans;
    for(int i=0;i<n;i++){
        vector<ll>temp;
        while(v[i]!=0 && i<n){
            temp.push_back(v[i]);
            i++;
        }
        if(temp.size()!=0){
            vans.push_back(temp);
        }

    }
    if(vans.size()>2){
        cout<<2<<endl;
    }
    else{
        cout<<vans.size()<<endl;
    }
    
}
return 0;
}