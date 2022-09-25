#include <bits/stdc++.h>
#define ll long long int
#define max 1e19
using namespace std;
int kthset(ll a,ll b){
    if(a &(1<<(b-1)))
    return 1;
    else{
        return 0;
    }
}
 const ll  lm=1000000;
ll prefix[lm][61];
int main() {
	// your code goes here
	int t;
	
	//unsigned long long int  lm=1e18+1;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//return 0;
	//ll prefix[lm][61];
	for(int i=0;i<=60;i++){
	    prefix[0][i]=0;
	}
    cout<<"executing"<<endl;
	for(int i=1;i<=1e6;i++){
	    for(int j=1;j<=60;j++){
	        int flag=kthset(i,j);
	        if(flag)
	        prefix[i][j]=prefix[i-1][j]+1;
	        else
	        prefix[i][j]=prefix[i-1][j];
	        
	        
	    }
	}
	cin>>t;
	while(t--){
	    unsigned long long int n,k;
	    cin>>n>>k;
	    if(prefix[n][k]%2==0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	    
	}
    return 0;
}
