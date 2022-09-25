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
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;

    }
    int sum1=0;
    for(int i=0;i<=100;i++){
        if(m[i]==0){
sum1+=i;
break;
        }
        else
        m[i]--;
    }
    for(int i=0;i<=100;i++){
        if(m[i]==0){
            sum1+=i;
            break;
        }
        else{
            m[i]--;
        }
    }
    cout<<sum1<<endl;
}
return 0;
}