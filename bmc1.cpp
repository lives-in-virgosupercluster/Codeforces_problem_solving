#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll>v;
while(n>0){
    v.push_back(n);
    cin>>n;

}
vector<ll>temp;
//sort(v.begin(),v.end());
ll mx=-1;
int flag=0;

for(ll i=0;i<v.size();i++){
    if(flag!=0){
        if(v[i]<100){
            temp.push_back(v[i]);
            flag=0;
        }
    }
    else{
        if(v[i]>100){
            flag=1;
        }
        temp.push_back(v[i]);
    }
}
for(ll i=0;i<temp.size();i++){
    cout<<temp[i]<<endl;
}
//cout<<temp.size()<<endl;

return 0;
}