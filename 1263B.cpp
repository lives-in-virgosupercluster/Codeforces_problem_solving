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
    vector<ll>num(4,0);
ll n;
cin>>n;
set<string>sample;
for(ll i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
    sample.insert(s);

}
int res=0;
vector<ll>count(n,0);
for(ll i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(count[j]){
            continue;
        }
        if(v[i]==v[j]){
            count[j]=1;
            res++;
            for(int k=0;k<4 && v[i]==v[j];k++){
                for(char c='0';c<='9';c++){
                    string t=v[j];
                    t[k]=c;
                    if(!sample.count(t)){
                        sample.insert(t);
                        v[j]=t;
                        break;

                    }

                }
            }

        }
    }
}
cout<<res<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<endl;
}


}
return 0;
}