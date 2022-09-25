#include<bits/stdc++.h>
using namespace std;
 

int main(){
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        int n,k;
        int x;
        cin>>n>>k;
        vector<int>ans(n+1,0);
        vector<vector<int>>occur(n+1);
        vector<int>tocolor;
        vector<int>freq(n+1,0);
        vector<int> arr(n+1);
        
        for(int i=0;i<n;i++){
           cin>>arr[i];
           
            freq[arr[i]]++;
            
            occur[arr[i]].push_back(i);
            
        }
        
        
        for(int i=0;i<=n;i++){
            if(freq[i]>=k){
                for(int j=0;j<k;j++){
                    ans[occur[i][j]]=j+1;
                }
            }
            else{
                for(int j=0;j<freq[i];j++){
                    tocolor.push_back(occur[i][j]);
                }
            }
        }
        //cout<<tocolor.size();
        if(tocolor.size()>=k){
        
        for(int i=0;i<=tocolor.size()-k;i+=k){
            for(int j=0;j<k;j++){
                ans[tocolor[i+j]]=j+1;
            }


        }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

}
return 0;
}

