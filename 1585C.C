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
    int x;
    ll dis=0;
    cin>>n>>x;
    vector<int>pos;
    vector<int>neg;
    int flag=0;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        if(v<0)
        neg.push_back(-v);
        else
        pos.push_back(+v);
    }
    //for(int a:pos)
    //cout<<a<<endl;
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    if(pos.size()>0 && neg.size()>0){
    //cout<<"here"<<endl;
    if(neg[neg.size()-1]>pos[pos.size()-1]){
        for(int i=pos.size()-1;i>=0;i-=x){
            dis+=2*pos[i];
        }
        for(int i=neg.size()-1;i>=0;i-=x){
            if(i==neg.size()-1){
                dis+=neg[i];
            }
            else{
                dis+=2*neg[i];
            }
        }
        cout<<dis<<endl;
    }
    else{
        for(int i=neg.size()-1;i>=0;i-=x){
            dis+=2*neg[i];
        }
        for(int i=pos.size()-1;i>=0;i-=x){
            if(i==pos.size()-1){
                dis+=pos[i];
            }
            else{
                dis+=2*pos[i];
            }
        }
        cout<<dis<<endl;
        
    }
    }
    else{
        //cout<<pos.size()<<endl;
        if(pos.size()>0){
            //for(int a:pos)
           // cout<<a<<endl;
             for(int i=pos.size()-1;i>=0;i-=x){
            if(i==pos.size()-1){
                dis+=pos[i];
            }
            else{
                dis+=2*pos[i];
            }
        }
        cout<<dis<<endl;
        }
        else{
             for(int i=neg.size()-1;i>=0;i-=x){
            if(i==neg.size()-1){
                dis+=neg[i];
            }
            else{
                dis+=2*neg[i];
            }
        }
        cout<<dis<<endl;
        }
    }
    

}
return 0;
}