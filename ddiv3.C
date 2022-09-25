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
    vector<int> m(26,0);
    vector<int>pair(26,0);
    for(int i=0;i<26;i++){
        m[i]=0;
    }
    int n,k;
    string a;
    cin>>n>>k;
    cin>>a;
    for(int i=0;i<n;i++){
        m[a[i]-'a']++;
    }
   
    for(int i=0;i<26;i++){
        pair[i]=(m[i]/2);
        

    }
    
    ll l=1;
    ll r=n/k +1;
    while(r>l+1){
        ll numofpairs=0;
        ll mid=(l+r)/2;
        for(int i=0;i<26;i++){
            numofpairs+=pair[i];
        }
        if(numofpairs>=k*(mid/2)){
            l=mid;
        }
        else{
            r=mid;
        }

    }
    cout<<l<<endl;


}
return 0;
}