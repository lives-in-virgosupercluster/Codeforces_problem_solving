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
ll n;
cin>>n;
vector<ll>a (n,0);
vector<ll>found(n+1,0);
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
ll curr=1;
ll moves=0;
int flag=0;
for (ll i = 0; i < n; i++)

{   if(found[curr]==0){
    if(a[i]<=n && found[a[i]]==0){
        found[a[i]]=1;
        //moves++;
       
        if(curr==a[i]){
            while (found[curr]==1)
            {
                /* code */
                curr++;
            }
            
           // curr++;
            //moves--;
        }
    }
    else{
        if(a[i]/2.0>(float)curr){
            found[curr]=1;
            moves++;
            curr++;
            while(found[curr]==1)
            curr++;
        }
        else{
            flag=1;
            break;

        }
    }

}
}
if(flag==1){
    cout<<-1<<endl;
}
else{
    cout<<moves<<endl;
}

}
return 0 ;
}