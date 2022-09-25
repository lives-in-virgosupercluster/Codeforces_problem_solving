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
    string s;
    cin>>s;
    vector<char>v;
    vector<vector<char>>vans;

    ll count=0;
    for(ll i=0;i<s.length();i++){
        ll flag=1;
        for(auto a:v){
            if(s[i]==a){
                flag=0;
                break;
            }
        }
        if(flag==1){
            count++;
            
            if(count==4){
                vans.push_back(v);
                v.clear();
                count=1;
            }
            v.push_back(s[i]);
            //count=0;
            //v.clear();

        }
    }
    if(count>0){
        cout<<vans.size()+1<<endl;
    }
    else
    cout<<vans.size()<<endl;
}
return 0;
}