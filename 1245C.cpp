#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
const int mod=1e9+7;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string s;
    cin>>s;
    int n=s.length();
    vector<ll>dp(n,0);
    dp[0]=1;
    //dp[1]=1;
    int flag=1;
    for(ll i=0;i<n;i++){
            if(s[i]=='m'|| s[i]=='w'){
                flag=0;
                break;
            }
    }
    if(flag){
        for(ll i=1;i<n;i++){
            if(s[i]==s[i-1]){
                if(s[i]=='u'||s[i]=='n'){
                    if(i>1){
                        dp[i]=(dp[i-1]+dp[i-2])%mod;

                    }
                    else{
                        dp[i]=dp[i-1]+1;
                    }
                }
                else{
                    dp[i]=dp[i-1];
                }
            }
            else{
                dp[i]=dp[i-1];
            }
        }
        cout<<dp[n-1]<<endl;
    }
    else{
        cout<<0<<endl;
    }





return 0;
}