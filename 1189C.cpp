#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int candies(vector<ll>&s,int start,int end,int num){
    if(start==end)
    return num;
    vector<ll>temp;
    for(ll i=start;i<=end;i+=2){
        if(s[i]+s[i+1]>=10){
            num++;
        }
        temp.push_back((s[i]+s[i+1])%10);
    }
    // for(auto a:temp)
    // cout<<a<<endl;
    return candies(temp,0,temp.size()-1,num);


}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<ll>v(n,0);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
ll q;
vector<vector<pair<ll,ll>>>dp(20);
ll curr=1;
for(ll i=0;i<n;i++){
dp[0].push_back(make_pair(v[i],0));
}
for(ll deg=1;deg<20;deg++){
    curr*=2;
    for(ll i=0;i+curr<=n;i++){
        ll left=dp[deg-1][i].first;
        ll right=dp[deg-1][i+curr/2].first;
         ll leftcand=dp[deg-1][i].second;
            ll rightcand=dp[deg-1][i+curr/2].second;
            ll index=leftcand+rightcand;
        if(left+right>=10){
           
           index++;

        }
        dp[deg].push_back(make_pair((left+right)%10,index));

    }
    // if(deg==3){
    //     cout<<"here come"<<endl;
    //     cout<<dp[deg][0].second<<endl;
    // }

}

cin>>q;
for(ll i=0;i<q;i++){
    ll start,end;
    cin>>start>>end;
    //cout<<candies(v,start-1,end-1,0)<<endl;
    ll deg=end-start+1;
    int length=0;
    while(deg!=0){
        deg/=2;
        length++;

    }
    //cout<<<<endl;
    cout<<dp[length-1][start-1].second<<endl;

}
return 0;
}