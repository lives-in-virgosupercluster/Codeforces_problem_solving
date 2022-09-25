#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define num 200001


using namespace std;
// int bitset1(int bit,ll n){
//     if((n>>(bit-1)) & 1)
//     return 1;
//     else
//     return 0;
// }

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
vector<vector<ll>>prefixsum(num+1,vector<ll>(20,0));
    ll n;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=19;j++){
            //int flag=0;
            prefixsum[i][j]=prefixsum[i-1][j]+(i>>(j-1)&1);
    }
    }
cin>>t;
while(t--){
    // vector<vector<ll>>prefixsum(num+1,vector<ll>(20,0));
    // ll n;
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=19;j++){
    //         //int flag=0;
    //         prefixsum[i][j]=prefixsum[i-1][j]+(i>>(j-1)&1);
    // }
    // }
   // cin>>n;
    ll low,high;
    cin>>low>>high;
    
    //vector<ll>a(high+1,0);
    
    
    
    ll max=-1;
    for(int j=1;j<=19;j++){
        if(prefixsum[high][j]-prefixsum[low-1][j]>max){
            max=prefixsum[high][j]-prefixsum[low-1][j];
        }

    }
    //cout<<max<<endl;
    ll numofele=high-low+1;
    cout<<numofele-max<<endl;

    

}
return 0;
}