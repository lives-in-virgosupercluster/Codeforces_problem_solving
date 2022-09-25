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
    vector<int>v(n+1,0);
    //vector<vector<int>>ans(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<pair<int,int>>ans;
    vector<int>max;
    vector<int>min;
    int min1=1e9;
    int max1=-1;
    for(int i=1;i<=n;i++){
        if(max1<v[i]){
            max.push_back(v[i]);
            max1=v[i];
        }
        else{
        max.push_back(max1);
        }
        
    }
    for(int i=v.size()-1;i>1;i--){
        if(min1>v[i]){
            min1=v[i];
            min.push_back(v[i]);
        }
        else{
            min.push_back(min1);
        }
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(max[i-1]<min.back()){
            count++;
           // min.pop_back();

        }
        min.pop_back();
        //min.pop_back();

    }
    count++;
    cout<<count<<endl;
    
    
}
return 0;
}















