#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;


    ll n,k;
    cin>>n>>k;
    vector<char>c;
    string s;
    cin>>s;
    for(ll i=0;i<k;i++){
        char x;
        cin>>x;
        c.push_back(x);
    }
    int match=0;
    ll sub=0;
    int flag=0;
    // for(char d:c){
    //     cout<<d<<endl;
    // }
    for(ll i=0;i<s.length();i++){
        for(int j=0;j<c.size();j++){
            if(s[i]==c[j]){
                if(match==0){
                    sub++;
                }
                else{
                    sub+=match+1;
                }
                flag=1;
                break;
            }
        }
        if(flag){
            match++;
        }
        else{
            match=0;
        }
        flag=0;
        
    }
    cout<<sub<<endl;

return 0;
}