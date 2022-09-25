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
    ll ans=0;
    map<string,int>s;
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(s.find(a)==s.end()){
            ans+=m1[a[0]]+m2[a[1]];
            s[a]++;
        }
        else{

            ans+=m1[a[0]]+m2[a[1]]-2*s[a];
            s[a]++;
        }
        m1[a[0]]++;
        m2[a[1]]++;
    }
    cout<<ans<<endl;
}
return 0;
}