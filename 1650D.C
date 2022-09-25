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
    deque<int>d;
    vector<int>a(n+1,0);
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        d.push_back(x);
    }
    for(int i=n;i>0;i--){
        while(d.back()!=i){
            d.push_back(d.front());
            d.pop_front();
            a[i]++;


        }
        d.pop_back();
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
return 0;
}