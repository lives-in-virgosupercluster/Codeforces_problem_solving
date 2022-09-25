#include<bits/stdc++.h>
using namespace std;
long long int min(long long int n,long long int m){
    if(n>m){
        return m;
    }
    else{
        return n;
    }
}
int main(){
    int n,m;
    int x1,y1,x2,y2,ans,b;
    
    cin>>n>>m;
    
    vector<string> v(n,"ava");
    vector<vector<int>> dp(2500);
    for(int i=0;i<n;i++){
        cout<<"enter your string-\n";
        cin>>v[i];


    }
    cout<<v[0][0]-'0'<<endl;
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<n && j<m){
            if(i==0 && j==0){
                dp[0][0]=0;
                cout<<dp[0][0]<<endl;
            }
            else if(i==0 && j!=0){
                dp[0][j]=dp[0][j-1] +(v[0][j]-'0');
            }
            else if(j==0 && i!=0){
                dp[i][0]=dp[i-1][0]+(v[i][0]-'0');
            }
            else{
                dp[i][j]=dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+(v[i][j]-'0');
            }

        }
        else{
            if(i==0 && j!=0){
                dp[0][j]=dp[0][j-1];
            }
            else if(i!=0 && j==0){
                dp[i][0]=dp[i-1][0];
            }
            else{
                dp[i][j]=dp[i][j-1]+dp[i-1][j]+dp[i-1][j-1];
            }
        }
        }
    }
    b=0;
    ans=10e9;
    for(int k=2;k<=2500;k++){
        
        for(int i=k-1;i-k-1<n;i+=k){
            
            for(int j=k-1;j-k-1<m;j+=k){
                x1=min(i,n);y1=min(j,m);
                x2=i-k;y2=j-k;
                b+=dp[x1][y1]-dp[x1][y2];


            }

        }
        
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<"\n";
    //     }
    // }
    return 0;


}

